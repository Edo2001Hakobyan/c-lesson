#include <iostream>

int main()
{             
        	struct human
               {
		    std::string name;
		    int age;

	       } h1,h2,h3;

               h1.name = "John";
	       h1.age  = 30;
               h2.name = "Leo";
               h2.age  = 28;
	       h3.name = "Jane";
               h3.age  = 32;

	       std::cout<<"The oldest man is "<<std::endl;

	        if (h1.age > h2.age && h1.age > h3.age) std::cout<<h1.name<<" "<<h1.age<<std::endl;
	        else if (h2.age > h1.age && h2.age > h3.age) std::cout<<h2.name<<" "<<h2.age<<std::endl;
	        else std::cout<<h3.name<<" "<<h3.age<<std::endl;
		 
	      return 0;
}	

