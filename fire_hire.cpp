#include <iostream>


class Human
{  
       public:
          
       int age;
       std::string name;
       std::string surname;
       
             
       Human(int x,std::string n,std::string s)
       {
            age =  x; 
            name = n;
            surname = s;
          
       }
       
       Human()
       {
           age = 0;
           name = "";
           surname = ""; 
       }
       
 };


class Employee:public Human
{
       public:
       std::string companyName;
       int salary;
       
       Employee(std::string c,int y)
       {
            companyName = c;
            salary = y;
	    
       } 
       Employee()
       {
            companyName = "";
            salary = 0;
	    
       }   
};

class Staff:public Employee
{
        public:
	std::string level;	
	int staffArray[5];
        Staff(std::string l)
	{
		level = l;
	}	
	     

	
};


class Manager:public Employee
{
	public:         
         void hire(Staff& staff,int id)
         {
             for(int i=0;i<5;i++)
             {		     
                if(staff.staffArray[i]==0)
		{
			staff.staffArray[i] = id;
			break;
		}
	     } 	
  
         }
         void fire(Staff& staff,int id)
         {
             for(int i=0;i<5;i++)
             {		     
                if(staff.staffArray[i] ==id)
		{
			staff.staffArray[i] = 0;
			break;
		}
	     } 	
  
         } 
};


int main()
{
       Staff s1;
       Manager m1;
       m1.hire(s1,1);
       m1.hire(s1,2);

       m1.fire(s1,1); 
       
        

       for(int i =0;i<5;i++)
	{
		if(s1.staffArray[i] != 0)
		{
			std::cout<<s1.staffArray[i]<<" "<<"is still employed"<<std::endl;
			break;
		}
	}        
       return 0;
}





