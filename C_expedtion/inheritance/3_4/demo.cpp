#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
/*
 * 保护继承和私有继承
 * person类，数据成员：m_strName，成员函数：构造函数、play()
 * Soldier类，数据成员：m_iAge,成员函数：构造函数、work()
 * Infantry步兵类、成员函数：attack（）
*/
int main(void)
{
	Soldier soldier;
	soldier.work();
	soldier.play();
	return 0;
}
