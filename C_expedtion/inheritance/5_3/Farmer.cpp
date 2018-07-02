#include "Farmer.h"
#include <iostream>
using namespace std;
Farmer::Farmer(string name)
{
	m_strName = name;
	cout<<"Farmer()"<<endl;
}
Farmer::~Farmer()
{
	cout<<"~Farm()"<<endl;
}
void Farmer::sow()
{
	cout<<"sow()"<<endl;
}
