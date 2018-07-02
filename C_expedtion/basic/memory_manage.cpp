#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	//在堆中申请100个char类型的内存
	char *str = new char[100];
	//拷贝Hello C++字符串到分配的堆中的内存中
	strcpy(str,"Hello world");
	cout<<str<<endl;
	delete []str;
	str = NULL;
	return 0;
}
