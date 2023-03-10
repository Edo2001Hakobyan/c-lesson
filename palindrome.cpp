#include <iostream>
//This function is check that the number is palindrome or not:
int main()
{
        int n, num,revNum = 0;
        std::cout<<"Enter a number:"<<std::endl;
        std::cin>>n;
	num = n;
        while (num != 0)
	{
		revNum = revNum * 10 + num % 10;
		num /= 10;
	}
        if (n == revNum)
	{
		std::cout<<n<<" "<< "is a palindrome"<<std::endl;
	}	
	else
	{
		std::cout<<n<<" "<< "is not a palindrome"<<std::endl;
	}
	return 0;

}
