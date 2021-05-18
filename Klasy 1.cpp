#include <iostream>
using namespace std;

class MyClass      //Zadania 1-4
{
//private:
	int a;

protected:
	int b;

public:
	int c;

	MyClass();
	MyClass(int x , int y);
	MyClass(double z, double w);

};

int main()
{
	MyClass c1;
	MyClass c2(2, 3);
	MyClass c3(2.5, 3.5);

}

MyClass::MyClass()
{
	cout << "Konstruktor bezparametrowy" << endl;
}

MyClass::MyClass(int x, int y) 
{ 
	cout << "x = " << x;
	cout << " y = " << y << endl;
}

MyClass::MyClass(double z, double w)
{
	cout << "z = " << z;
	cout << " w = " << w << endl;
}
