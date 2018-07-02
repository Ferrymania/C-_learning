#include <iostream>
using namespace std;
int main(void)
{
	const int count = 3;
	const int *p = &count;
	for(int i = 0;i< *p;i++)
		{
		cout<<"Hello World"<<endl;
		}
	return 0;
}
