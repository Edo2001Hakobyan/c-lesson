#include <iostream>
int main()
{	int num,reverseNum = 0;
	std::cout<<"Enter a number:"<<std::endl;
	std::cin>>num;
	while (num != 0)
	{         
	      reverseNum = reverseNum * 10 + num % 10;
	      num /= 10;
	
	}
	std::cout<<"Reverse number is "<<reverseNum<<std::endl;
         return 0;

}               
