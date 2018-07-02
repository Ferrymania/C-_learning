#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
/*
 * 继承关系中隐藏
 * Person类，数据成员：m_strName，成员函数：构造函数、play()
 * Soldier类，数据成员：无，成员函数：构造函数、play(),work()
*/
int main(void)
{
	Soldier soldier;
	soldier.play();
	soldier.work();
	return 0;
}
