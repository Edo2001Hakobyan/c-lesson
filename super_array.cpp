#include <iostream>

class SuperArray
{
	int size,*data;

        public:

        SuperArray(int x)
	{
		size = x;
		data = new int[size];
	}
		
       	SuperArray()
	{
		size = 0;
	}

	~SuperArray()
	{
		delete [] data;
	}

	int getSize()
	{
		return size;
	}
        
	//Function that set two argument index and value and check if index is big 0 or big or equal size script auto will be exit,if check is true value will equal data[index]
	void set(int index,int value)
	{
		if(index < 0 || index >= size)
		{
			std::cout<<"Index out of range"<<std::endl;
			exit (1);
		}
		data[index] = value;
	}
        
	//Function that get one argument index and is return data[index].
	int get(int index)
	{
		if(index < 0 || index >= size)
		{					
			std::cout<<"Index out of range"<<std::endl;
			exit (1);
		}
		return data[index];		
		
	}
};

int main()
{
	SuperArray arr(5);
	for(int i = 0;i < arr.getSize();i++ )
	{
		arr.set(i,i * 3);
	}

	for (int i = 0;i < arr.getSize();i++)
	{
		std::cout<<arr.get(i)<<" ";
	}
	std::cout<<std::endl;

	return 0;
}
