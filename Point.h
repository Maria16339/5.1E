#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "Object.h"

using namespace std;

class Point : public Object
{
private:
	double x;
	double y;
public:
	Point();
	Point(double a, double b) throw (out_of_range);
	Point(const Point& A);
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
	operator string() const;
	void SetX(double a) throw (myerror_base) { if (abs(a) > 100) throw new myerror_base(); x = a; };
	void SetY(double a) throw (myerror_base) { if (abs(a) > 100) throw new myerror_base(); y = a; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void movingThePoint_X();
	void movingThePoint_Y();
	string toString() const;
	void Distance() const { cout << "Distance: " << sqrt(x * x + y * y) << endl; };
	Point& operator --() throw (myerror);
	Point& operator ++() throw (myerror);
	Point operator --(int) throw(myerror);
	Point operator ++(int) throw(myerror);
};
