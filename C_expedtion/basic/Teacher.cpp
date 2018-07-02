#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
/*
  define one teacher class by using the same document defined outside the class
*/
class Teacher
{
  public:
	void setName(string _name);
	string getName();
	void setGender(string _gender);
	string getGender();
	void setAge(int _age);
	int getAge();
	void teach();
  private:
	string name;
	int age;
	string gender;
};
void Teacher::setName(string _name)
{
   name = _name;
}
string Teacher::getName()
{
  return name;
}
void Teacher::setGender(string _gender)
{
  gender = _gender;
}
string Teacher::getGender()
{
  return gender;
}
void Teacher::setAge(int _age)
{
  age = _age;
}
int Teacher::getAge()
{
  return age;
}
void Teacher::teach()
{
 cout<<"Now begin teaching "<<endl;
}
int main(void)
{
 Teacher t;
 t.setName("Confusious");
 t.setGender("male");
 t.setAge(30);
 cout<<t.getName()<<""<<t.getAge()<<" "<<t.getGender()<<endl;
 t.teach();
 return 0; 
}
