#include <iostream>
#include <algorithm>
class Human {
     public:
	std::string name;
        int age;
        bool operator()(Human const & a,Human const & b)
	{	
	return a.age > b.age;
	};
	
};

int main()
{
	Human h1,h2,h3,h4,h5;
	
	h1.name = "John";
        h1.age = 18;

        h2.name = "Jack";
	h2.age = 24;

	h3.name = "Ann";
	h3.age = 16;
	
	h4.name = "Stephan";
        h4.age = 25;

	h5.name = "Angel";
        h5.age = 27;

	Human arr[5] = {h1,h2,h3,h4,h5};

	std::sort(arr,arr + 5,Human());

	for(int i=0;i<5;i++)
	{
	  std::cout<<arr[i].name<<" "<<arr[i].age<<" ";
		std::cout<<std::endl;
	}
	
      return 0;	
        
     
}	
