#include <iostream>

int main() {
	int arr[10] = {2,1,49,24,17,49,13,7,49,7};
	int count = 1;
	int max = arr[0];
	for (int i=0;i<10;i++)
	{ 
	  if(arr[i]>max)
	  {	
             max=arr[i];
	     count = 1;
	     
	  }
	  else if ( arr[i] == max) count++;
		  
	}	
       std::cout<<count<<std::endl;
       return 0;
}
