#include <iostream>
#include "stdlib.h"
#include "Time.h"
#include "Match.h"
using namespace std;

//友元类

int main(void)
{
	Match m(6,34,25);
	m.testTime();
	
	return 0;
}

//void printTime(Time &t)
//{
//	cout<<t.m_iHour<<":"<<t.m_iMinute<<":"<<t.m_iSecond<<endl;
//}

