#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
/*
 * 公有继承：Is a
 * Person类，数据成员：m_strName，成员函数：构造函数、析构函数、play()
 * Soldier类，数据成员：无，成员函数：构造函数、析构函数,work()
 * 定义test1(Person p) test2(Person &p) test3(Person *p)
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
	Soldier s;
	Person p;
	//p = soldier;
	//p->play();
	test3(&p);
	test3(&s);
		
	return 0;
}
