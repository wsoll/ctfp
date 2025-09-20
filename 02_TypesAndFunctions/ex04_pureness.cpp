#include <iostream>
#include <functional>
#include <unordered_map>
#include "types.h"

template <typename Arg, typename Result>
class Memoize {
public:
    // Alias
    using Func = std::function<Result(Arg)>;

    // Constructor
    Memoize(Func f) : func(f) {}

    Result operator()(Arg x){
        auto it = cache.find(x);
        if (it != cache.end()) {
            std::cout << "Cache used for argument: " << x << std::endl;
            return it->second;
        }
        Result res = func(x);
        cache[x] = res;
        return res;
    }
private:
    Func func;
    std::unordered_map<Arg, Result> cache;
};


int main() {
    Memoize<int, int> memoFactorial(factorial);
    Memoize<int, int> memoGetChar(std::getchar);

    std::cout << "1: Factorial(30): " << memoFactorial(30) << std::endl;
    std::cout << "2: Factorial(30): " << memoFactorial(30) << std::endl;
    memoGetChar();

    return 0;
}