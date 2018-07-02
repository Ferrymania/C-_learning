#include <iostream>
#include <stdlib.h>
#include "MigrantWorker.h"

/*多继承
 * Farmer类，数据成员：m_strName,成员函数：构造函数、析构函数、sow()
 * Worker类，数据成员：m_strCode,成员函数：构造函数、析构函数、carry()
 * MingrantWorker类，数据成员：无，成员函数：构造函数、析构函数
 */
int main(void)
{
	MigrantWorker *p = new MigrantWorker("Merry","100");
	p->carry();
	p->sow();
	delete p;
	p =NULL;
	return 0;
}
