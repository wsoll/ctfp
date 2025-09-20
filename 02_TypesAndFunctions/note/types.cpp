#include <iostream>
#include <typeinfo>
#include "types.h"

// unit :: a -> ()
// unit _ = ()
template<class T>
void unit(T) {
    std::cout << "Type: " << typeid(T).name() << std::endl;
}

template void unit<int>(int);

int factorial(int n) {
    int i;
    int result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
       return result;
}