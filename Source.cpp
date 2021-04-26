#include "Point.h"

int main()
{
	Point a;
	cin >> a;
	cout << "a: " << endl << a << endl;
	cout << "Moving the point x:";
	a.movingThePoint_X();
	cout << endl;
	cout << "Moving the point y:";
	a.movingThePoint_Y();

	try {
		Point b(3, 3);
		Point c(b);
		c--;
		++b;
		
	}
	catch (out_of_range e) {
		cout << e.what() << endl;
	}
	catch (myerror& e) {
		cout << e.what() << endl;
	}
	try {
		a.SetX(200);
	}
	catch (myerror_base* e) {
		cout << e->what() << endl;
	}
	cout << Object::Count() << endl;
	{
		Object d;
		cout << Object::Count() << endl;
	}
	cout << Object::Count() << endl;
}