#include <iostream>
#include <typeinfo>
#include "types.h"

int factorial(int n) {
    int i;
    int result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
       return result;
}