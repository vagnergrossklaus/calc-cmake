#include <iostream>

#include <calc/calculator.h>

int main(){

    std::cout << "main()" << std::endl;

    Calculator calc;
    std::cout << "main() 1 + 1.5 = " << calc.add(1, 1.5) << std::endl;
    std::cout << "main() 1 - 1.5 = " << calc.subtract(1, 1.5) << std::endl;

    return 0;

}