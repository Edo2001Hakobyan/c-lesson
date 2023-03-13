#include <iostream>
#include <cmath>

int main()
{       
	int num,rem;
	int dec = 0;
	int i = 0;
	std::cout<<"Enter a binary number!"<<std::endl;
	std::cin>>num;
	while (num != 0)
	{
		rem=num % 10;
		num /= 10;
		dec += rem * pow(2,i);
		i++;
	}
        std::cout<<dec<<std::endl;	
	return 0;
}	

