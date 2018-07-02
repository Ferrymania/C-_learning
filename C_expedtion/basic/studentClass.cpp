#include <iostream>
#include <stdlib.h>
using namespace std;

class Student
{
	public:
		void setName(string str)
		{
			m_name = str;
		}
		string getName()
		{
			return m_name;
		}
		void setAge(int age)
		{
			m_age = age;
		}
		int getAge()
		{
			return m_age;
		}
	private:
		string m_name;
		int m_age;
};
int main()
{
	Student stu;
	stu.setName("蓝眼白龙");
	stu.setAge(23);
	cout<<"student's name is "<<stu.getName()<<endl;
	cout<<"student's age is "<<stu.getAge()<<endl;
	Student *student = new Student;
	if(student == NULL)
	{
		cout<<"memory can not allocate"<<endl;
		return 0;
	}
	student->setName("goubi");
	student->setAge(33);
	cout<<"student's name is "<<student->getName()<<endl;
	cout<<"student's age is "<<student->getAge()<<endl;
	delete student;
	student = NULL;
	return 0;
}
