#include <iostream>
//This function is calculate the sum of the digits of a given number:
int main()
{	
   int num,sum;
   sum=0;
   std::cout<<"Enter a number: "<<std::endl;
   std::cin>>num;
   while (num != 0){
      int digit=num % 10;
      sum += digit;
      num /= 10;
    }
    std::cout<<"The sum of the digits is:"<<sum<<std::endl;   
    return 0;
}	
