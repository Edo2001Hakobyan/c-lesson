#include <iostream>
#include <cmath>

int main()
{
	int tmp;
	for (int i=100;i<1000;i++)
	{
        int sum = 0;
        tmp = i;
	while (tmp > 0)
	{ 
	    int digit = tmp % 10;
	    sum += pow(digit,3);
	    tmp /= 10;
	
	}	
        
        if (sum == i)	std::cout<<i<<std::endl;

        }



	for (int i=1000;i<10000;i++)
	{
        int sum = 0; 
        tmp = i;
	while (tmp > 0)
	{ 
	    int digit = tmp % 10;
	    sum += pow(digit,4);
	    tmp /= 10;
	
	}	
        
      	if (sum == i)	std::cout<<i<<std::endl;

        }
	
	
	return 0;

}	

