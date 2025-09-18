#include <iostream>
#include <typeinfo>

// unit :: a -> ()
// unit _ = ()
template<class T>
void unit(T) {
    std::cout << "Type: " << typeid(T).name() << std::endl;
}

int factorial(int n) {
    int i;
    int result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
       return result;
}

int main (){
    int result = factorial(5);
    std::cout << "Factorial: " << result << std::endl;
    unit(42);
    return 0;
}