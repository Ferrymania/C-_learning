#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;
/*
 * 定义一个Array类。
 * 数据成员：m_iLen表示数组长度
 * 成员函数：
 * 构造函数
 * 析构函数
 * len的封装函数
 * 信息输出函数printInfo
*/
int main(void)
{
	Array arr1(10);
	arr1.printInfo().setLen(5);
	cout<<"len = "<<arr1.getLen()<<endl;


	return 0;
}
