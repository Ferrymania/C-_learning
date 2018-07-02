#include "Array.h"
#include <iostream>
using namespace std;
Array::Array(int len)
{
	this->len = len;
}
Array::~Array()
{
}
void Array::setLen(int len)
{
	this->len = len;
}
int Array::getLen()
{
	return len;
}
Array& Array::printInfo()
{
	cout<<"len is "<<len<<endl;
	return *this;

}
