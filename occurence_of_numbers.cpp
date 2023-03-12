#include <iostream>

int main()
{      
	int num;
	int arr[10] = {0};
	while (true)
	{
		std::cout<<"Enter a numbers between 1 to 10"<<std::endl;
		std::cin>>num;

		if (num == -1)
		{
			break;

		}

		else 
		{
		     arr[num - 1]++;
		}
	}

	 for (int i=0;i<10;i++) 	
	 {
	 std::cout<<"Number"<< " "<<i+1<<" "<<arr[i]<<std::endl;
	 }
	return 0;
}
