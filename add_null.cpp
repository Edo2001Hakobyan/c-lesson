#include <iostream>

int main()
{       
	int num;
	std::cout<<"Enter a number!"<<std::endl;
	std::cin>>num;
	while (num >0)
	{

	 int digit = num % 10;
	 std::cout<<digit<<"0";
	 num /= 10;

	}
	std::cout<<""<<std::endl;
		
	return 0;

}	

