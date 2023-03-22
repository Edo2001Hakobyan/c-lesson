#include <iostream>

class Number
{
	double num;

	public:

	void set_num(int n)
	{
		num = n;
	}

	double get_num()
	{
		return num;

	}	

	Number(int n)
	{
		num = n;
	}

        Number ()
	{
		num = 0;
	}

        Number operator+(const Number& other)
	{
		Number tmp;
		tmp.num = this->num + other.num;
		return tmp;
	}
        Number operator-(const Number& other)
	{
		Number tmp;
		tmp.num = this->num - other.num;
		return tmp;
	}
        Number operator*(const Number& other)
	{
		Number tmp;
		tmp.num = this->num * other.num;
		return tmp;
	}

        Number operator/(const Number& other)
	{
		Number tmp;
		tmp.num = this->num / other.num;
		return tmp;
	}


        	
};

int main()
{
	Number n1(10);
	Number n2(20);
	Number n3 = n1 + n2;
	Number n4 = n1 - n2;
	Number n5 = n1 * n2;
	Number n6 = n1/n2;
	std::cout<<n3.get_num()<<std::endl;
	std::cout<<n4.get_num()<<std::endl;
	std::cout<<n5.get_num()<<std::endl;
	std::cout<<n6.get_num()<<std::endl;
	return 0;
}	
