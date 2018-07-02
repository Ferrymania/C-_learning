#include<string>

using namespace std;
/*
  define one teacher class by using the same document defined outside the class
*/
class Teacher2
{
  public:
	Teacher2();
	Teacher2(string name,int age);
	Teacher2(const Teacher2 &tea);
	~Teacher2();	
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

