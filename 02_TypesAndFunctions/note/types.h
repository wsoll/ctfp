#ifndef TYPES_H
#define TYPES_H

#include <iostream>
#include <functional>
#include <unordered_map>
#include <typeinfo>


int factorial(int n);

// unit :: a -> ()
// unit _ = ()
template<class T>
void unit(T) {
    std::cout << "Type: " << typeid(T).name() << std::endl;
}

// One-argument Memoize
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
            std::cout << "Cache used for argument: " << x << ", result: ";
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

// Zero-argument Memoize
template<typename Result>
class MemoizeZero {
public:
    using Func = std::function<Result()>;

    MemoizeZero(Func f) : func(f), cached(false) {}

    Result operator()() {
        if (cached) {
            std::cout << "Cache used!";
            return value;
        }
        value = func();
        cached = true;
        return value;
    }

private:
    Func func;
    bool cached;
    Result value;
};

#endif