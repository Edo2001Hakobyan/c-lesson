#include <iostream>
#include <algorithm>
#include "My_class.h"

       	int SuperArray::getSize()
	{
		return m_size;
	}

	int SuperArray::getCapacity()
	{
		return m_capacity;
	}

	void SuperArray::pushBack(int value)
	{
		if(m_size == m_capacity)
		{       
			//If the array is full,double the capacity
			m_capacity *= 2;
			int *new_data = new int[m_capacity];
			std::copy(m_data,m_data + m_size,new_data);
			delete [] m_data;
			m_data = new_data;
		}
		m_data[m_size++] = value;
	}


      // Function that set two argument index and value and check if index is big 0 or big or equal size script auto will be exit,if check is true value will equal data[index]
      void SuperArray::set(int index,int value)
      {
      	if(index < 0 || index >= m_size)
      	{
      		std::cout<<"Index out of range"<<std::endl;
      		exit (1);
      	}
      	m_data[index] = value;
      }
      
      //Function that get one argument index and is return data[index].
      int SuperArray::get(int index)
      {
      	if(index < 0 || index >= m_size)
      	{					
      		std::cout<<"Index out of range"<<std::endl;
      		exit (1);
      	}
      	return m_data[index];		
            
      }

     

