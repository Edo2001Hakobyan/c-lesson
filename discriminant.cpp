#include <iostream>
#include <cmath>
//This function is calculate the discriminant of a quadratic equation:
int main()
{
     double a,b,c,discriminant;
     std::cout<<"Enter a,b,c numbers:"<<std::endl;
     std::cin>>a>>b>>c;
     discriminant=b*b-4*a*c;
      
     if (discriminant>0) {
     double x1 = (-b + sqrt(discriminant))/(2*a);      	
     double x2 = (-b - sqrt(discriminant))/(2*a);
     std::cout<<"x1 = "<<x1<<std::endl;     
     std::cout<<"x2 = "<<x2<<std::endl;
    }
     
     else if (discriminant == 0) {
	 double x = -b / (2 * a);
        std::cout<<"x = "<<x<<std::endl;
     }
     
     else {
	     std::cout<<"has no solution:"<<std::endl;
     }     
	return 0;
}	
  









	     
