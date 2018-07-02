#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>

using namespace std;
class Coordinate
{
	friend  Coordinate operator+(Coordinate c1,Coordinate c2);
	friend ostream &operator<<(ostream &output,Coordinate &coor);
	public:
		Coordinate(int x,int y);
		//Coordinate operator+(Coordinate &c);
		int operator[](int index);
		int getX();
		int getY();
	private:
		int m_iX;
		int m_iY;
};
#endif
