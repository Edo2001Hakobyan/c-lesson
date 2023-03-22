#include <iostream>

class Number
{
	int num;

	public:

        void set_num(int n)
	{
		num = n;
	}
        
        int get_num()
	{
		return num;
	}

        Number(int n)
	{
		num = n;
	}
       
        Number()
	{
		num = 0;
	}
       
	std::ostream& operator<<(std::ostream& os) const 
	{
		os << num;
		return os;
	}	
};

 std::ostream& operator<<(std::ostream& os,const Number& obj)
 {
	 return obj << os;
 }	


int main()
{
	Number obj(10);
	std::cout<<obj<<std::endl;
	return 0;
}	
