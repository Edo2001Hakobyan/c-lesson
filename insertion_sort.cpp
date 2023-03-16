#include <iostream>

void insertion_sort(int arr[]); 
    
int main() {
    int arr[8] = { 2, 5, 1, 9, 7,13,10,8 };
    insertion_sort(arr);
    for (int i=0;i<8;i++)
    {  	    
    std::cout<<arr[i]<<std::endl;
    } 
       return 0;
}

void insertion_sort(int arr[])
{
	for (int i=1;i<8;i++)
	{
		int key = arr[i];
		int j = i - 1;
	        while (j >=0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
	        arr[j+1] = key;	
	}
}	

