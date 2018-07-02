#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	int &y = x;
	cout<<x<<","<<y<<endl;
	y = 4;
	cout<<x<<","<<y<<endl;
	return 0;
}
