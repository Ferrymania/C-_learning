#include <iostream>
#include <stdlib.h>
#include "Circle.h"
#include "Rect.h"
using namespace std;
/*
 *  * 动态多态、虚函数
 *   * Shape类，成员函数：calArea()，构造函数，析构函数
 *   Rect类，成员函数：calArea(),构造函数，析构函数
 *   数据成员：m_dWidth,m_dHeight
 *   Circle类，成员函数：calArea(),构造函数，析构函数
 *   数据成员：m_dR
 */
int main(void)
{
	Shape *shape1 = new Rect(3,6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();
	delete shape1;
	shape1 =NULL;
	delete shape2;
	shape2 = NULL;
	return 0;
}
