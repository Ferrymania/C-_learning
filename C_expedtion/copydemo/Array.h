class Array
{
	public:
		Array(int count);
		~Array();
		Array(const Array &arr);
		void setCount(int count);
		int getCount();
		void printAddr();
		void printArr();
	private:
		int m_iCount;
		int *m_pArr;
};
