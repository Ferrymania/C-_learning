#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>
#include <string>

using namespace std;

int main(void)
{
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(6);
	vec.pop_back();
	cout<<vec.size()<<endl;
	//for(int i = 0;i<vec.size();i++)
	//{
		//cout<<vec[i]<<endl;
	//}
	vector<int>::iterator itor1 = vec.begin();
	//cout<<*itor1<<endl;
	for(;itor1 !=vec.end();itor1++)
	{
		cout<<*itor1<<endl;
	}
	cout<<vec.front()<<endl;
	cout<<vec.back()<<endl;

	list<int> list1;
	list1.push_back(4);
	list1.push_back(7);
	list1.push_back(10);

	list<int>::iterator itor2 = list1.begin();
	for(;itor2!=list1.end();itor2++)
	{
		cout<<*itor2<<endl;
	}

	map<int,string> m;
	pair<int,string> p1(3,"hello");
	pair<int,string> p2(6,"world");
	m.insert(p1);
	m.insert(p2);
	//cout<<m[3]<<endl;
	map<int,string>::iterator itor3 = m.begin();
	for(;itor3 != m.end();itor3++)
	{
		cout<<itor3->first<<endl;
		cout<<itor3->second<<endl;
		cout<<endl;
	}


	


	return 0;
}
