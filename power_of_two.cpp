#include <iostream>
//This script check that number is power of two or not.
int main() {
    int num;
    std::cout << "Enter a number: "<<std::endl;
    std::cin>>num;
    if (num == 0)
    {
	    std::cout << num << " is not a power of 2." <<std::endl;
    }	    
    else if (num % 2  == 0) 
    {
	    std::cout << num << " is a power of 2." <<std::endl;
    } 
    else 
    {
	    std::cout << num << " is not a power of 2." <<std::endl;
    }

    return 0;
}
