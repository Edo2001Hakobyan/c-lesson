class SuperArray
{
	private:

        int m_size;
        int m_capacity;
        int  *m_data;

        public:

        
        SuperArray(int x)
	{
		m_size = x;
		m_data = new int[m_capacity];
	}
        
        
        SuperArray()
	{
		m_size = 0;
		m_capacity = 10;
		m_data = new int[m_capacity];
	}

        int getSize();
        int getCapacity();
	void pushBack(int value);
	void set(int index,int value);      
        int get(int index);

        ~SuperArray()
        {
	      delete [] m_data;
        }  
	        
};

