#include "Point.h"
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(double a, double b) throw (out_of_range)
{
	if (abs(a) > 100 || abs(b) > 100)
		throw out_of_range("abs(x) or abs(y) > 100");
	x = a;
	y = b;
}
Point::Point(const Point& A)
{
	x = A.x;
	y = A.y;
}
ostream& operator << (ostream& out, const Point& A)
{
	return out << string(A);
}
istream& operator >>(istream& in, Point& A)
{
	cout << "Enter x: "; in >> A.x;
	cout << "Enter y: "; in >> A.y;
	cout << endl;
	return in;
}
Point::operator string() const
{
	stringstream ss;
	ss << "x= " << x << "  y= " << y << endl;
	return ss.str();
}
void Point::movingThePoint_X()
{
	float rx;
	cin >> rx;
	x += rx;
	cout << x;
	toString();

}

void Point::movingThePoint_Y()
{
	float ry;

	cin >> ry;
	y += ry;
	cout << y;
	toString();
	cout << endl;
	cout << "Distance: " << sqrt(x * x + y * y) << endl;
}

string Point::toString() const
{
	stringstream SS;
	SS << "(" << x << "; " << y << ")" << endl;
	return SS.str();
}

Point& Point::operator --() throw (myerror)
{
	if (x == -100)
		throw myerror("x==-100");
	--x;
	return *this;
}
Point& Point::operator ++() throw (myerror)
{
	if (x == 100)
		throw myerror("x==100");
	++x;
	return *this;
}
Point Point::operator --(int) throw (myerror)
{
	if (y == -100)
		throw myerror("y==-100");
	Point tmp(*this);
	y--;
	return tmp;
}
Point Point::operator ++(int) throw (myerror)
{
	if (y == 100)
		throw myerror("y==100");
	Point tmp(*this);
	y++;
	return tmp;
}
