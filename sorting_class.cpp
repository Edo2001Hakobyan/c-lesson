#include <iostream>

class Human {
     int age;	
     public:
	std::string name;

	void set_age(int x)
	{
		age = x;
	}

	int get_age()
	{
		return age;
	}	
       
};

void print_arr(Human* arr,int);

void sorting_arr(Human* arr,int );

int main()
{
	Human h1,h2,h3,h4,h5;
	
	h1.name = "John";
        h1.set_age(18);

        h2.name = "Jack";
	h2.set_age(24);

	h3.name = "Ann";
	h3.set_age(16);
	
	h4.name = "Stephan";
        h4.set_age(25);

	h5.name = "Angel";
        h5.set_age(27);

	Human arr[5] = {h1,h2,h3,h4,h5};

        sorting_arr(arr,5);
	print_arr(arr,5);
	

      return 0;	
        
     
}
void sorting_arr(Human* arr,int n)
{
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n-1;j++)
		{
		 if (arr[j].get_age()>arr[j+1].get_age()) 
		     {
			Human tmp;
	                tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = tmp;
		     }
		
		}
	}
}	



void print_arr(Human* arr,int n)
{
	for (int i=0;i<n;i++)
	{
	std::cout<<arr[i].name<<" "<<arr[i].get_age()<<" ";
		std::cout<<std::endl;
		
	}
}


