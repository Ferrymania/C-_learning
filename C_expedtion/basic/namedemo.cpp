#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(void)
{
	string name;
	cout<<"please input your name:"<<endl;
	getline(cin,name);
	if(name.empty())
		{
			cout<<"Sorry,your input is empty"<<endl;
			return 0;
		}
	if(name == "cjj")
		cout<<"Your role is administrator"<<endl;
	cout<<"Hello "+name<<endl;
	cout<<"your name's length is "<<name.size()<<endl;;
	cout<<"your name first character is "<<name[0]<<endl;
	return 0;
}

