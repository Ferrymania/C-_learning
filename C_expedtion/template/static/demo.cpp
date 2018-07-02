#include "Tank.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

/*
 * 静态数据成员与静态成员函数
 * Tank类，数据成员：坦克编号：m_cCode,坦克数量：s_iCount
 * 成员函数：构造函数、析构函数，fire,getCount
 */
int main(void)
{
	Tank t1('A');
	cout<<Tank::getCount()<<endl;;
	return 0;
}
