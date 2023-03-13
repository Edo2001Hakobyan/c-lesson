#include <iostream>

int main()
{       
	int num;
	std::cout<<"Enter a number!"<<std::endl;
	std::cin>>num;
	while (num != 0)
	{
		int n = num % 2;
		std::cout<<n;
		num /= 2;
	}
        std::cout<<""<<std::endl;	
	return 0;
}	

