#include <iostream>
#include <cmath>
struct triangle
 {
    double  x,y;

 } p1,p2,p3;
	
double distance(triangle p1,triangle p2);
bool do_triangle(triangle p1,triangle p2,triangle p3);
           	
int main()
{             
         
              triangle p1 = {0,0};	
              triangle p2 = {3,4};	
              triangle p3 = {6,0};

        if(do_triangle(p1,p2,p3)) std::cout<<"The three points can form a triangle"<<std::endl;
        else std::cout<<"The three points can't form a triangle"<<std::endl;	
              	 
	      return 0;
}	

double distance(triangle p1,triangle p2)
{
	double dx = p1.x - p2.x;
	double dy = p1.y - p2.y;
	return sqrt(dx*dx + dy*dy);
}


bool do_triangle(triangle p1,triangle p2,triangle p3)
{
	double d1=distance(p1,p2);
	double d2=distance(p2,p3);
	double d3=distance(p1,p3);
	return (d1+d2>d3) && (d2+d3>d1) && (d1+d3>d2);
}
