#include <iostream>
bool get_simple(int);
int main()
{	int num;
	std::cout<<"Enter a number:"<<std::endl;
	std::cin>>num;
	std::cout<<"Simple numbers between 1 "<<num<<" "<<"are:"<<std::endl;
	for(int i=2;i<=num;i++ )
	{
		if(get_simple(i))
		{
			std::cout<<i<<" "<<std::endl;
		}

	}	
         return 0;

}       

bool get_simple(int n)
{       if(n <= 1) return false;

	for (int i=2;i*i<=n;i++)
	{   
		if(n % i == 0) return false;
	}

	return true;

}	
