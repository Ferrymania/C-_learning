#include <iostream>
#include <stdlib.h>
#include "Infantry.h"
/*
 * 多重继承
 * Person类，数据成员：m_strName,成员函数；构造函数，析构函数、play()
 * Soldier类，数据成员：m_iAge,成员函数：构造函数，析构函数、work()
 * Infantry类，数据成员：无，成员函数:构造函数、析构函数,attack()
 * 定义函数test1(Person p) test2(Person &p) test3(Person *p)
 */
void test1(Person p)
{
	p.play();
}
void test2(Person &p)
{
	p.play();
}
void test3(Person *p)
{
	p->play();
}
int main(void)
{
	Infantry infantry;
	test1(infantry);
	test2(infantry);
	test3(&infantry);
	return 0;
}
