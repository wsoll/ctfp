#include <iostream>
#include <functional>
#include <unordered_map>
#include "types.h"


bool f() {
    std::cout << "Hello!";
    return true;
}

int f2(int x) {
    static int y = 0;
    y += x;
    return y;
}


int main() {
    Memoize<int, int> memoFactorial(factorial);

    std::cout << "1: Factorial(5): " << memoFactorial(5) << std::endl;
    std::cout << "2: Factorial(5): " << memoFactorial(5) << std::endl;

    MemoizeZero<bool> memoF(f);
    std::cout << "1: memoF(): " << memoF() << std::endl;
    std::cout << "2: memoF(): " << memoF() << std::endl;

    Memoize<int, int> memoF2(f2);
    std::cout << "1: memoF2(1): " << memoF2(1) << std::endl;
    std::cout << "2: memoF2(2): " << memoF2(2) << std::endl;
    std::cout << "3: memoF2(1): " << memoF2(1) << std::endl;

    return 0;
}