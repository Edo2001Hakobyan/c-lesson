#include <iostream>
//This script is concatenate two numbers is together.
int main() 
{	
    int num1, num2;
    std::cout << "Enter the first number: "<<std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: "<<std::endl;
    std::cin >> num2;

    int digits = 10;
    while (num2 >= digits)
    {    
        digits *= 10;
    }

    int result = num1 * digits + num2;

    std::cout << "The concatenated number is " << result <<std::endl;

    return 0;
}
