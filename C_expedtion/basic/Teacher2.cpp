#include<iostream>
#include<stdlib.h>
#include<string>
#include "Teacher2.h"

using namespace std;
/*
  define one teacher class by using the different document defined outside the class
*/
Teacher2::Teacher2()
{
 name = "sam";
 age = 27;
 cout<<"Teacher2()"<<endl;
}
Teacher2::Teacher2(string m_name,int m_age)
{
 name = m_name;
 age = m_age;
 cout<<"Teacher2(string m_name,int m_age)"<<endl;
}
Teacher2::Teacher2(const Teacher2 &tea)
{
	cout<<"using copy construct function "<<endl;
}
Teacher2::~Teacher2()
{
	cout<<"~Teacher()"<<endl;
}
void Teacher2::setName(string _name)
{
   name = _name;
}
string Teacher2::getName()
{
  return name;
}
void Teacher2::setGender(string _gender)
{
  gender = _gender;
}
string Teacher2::getGender()
{
  return gender;
}
void Teacher2::setAge(int _age)
{
  age = _age;
}
int Teacher2::getAge()
{
  return age;
}
void Teacher2::teach()
{
 cout<<"Now begin teaching "<<endl;
}
int main(void)
{
 Teacher2 t;
 t.setName("Confusious");
 t.setGender("male");
 t.setAge(30);
 cout<<t.getName()<<""<<t.getAge()<<" "<<t.getGender()<<endl;
 t.teach();
 Teacher2 t1;
 Teacher2 t2("Jack",15);
 Teacher2 t3(t1);
 Teacher2 *p = new Teacher2();
 delete p;
 return 0;
}

