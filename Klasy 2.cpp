#include <iostream>
using namespace std;


class Kwadrat
{
private:
	double szer;
	double wys;


public:
	Kwadrat() 
	{
		szer = 5;
		wys = 5;
	}
	Kwadrat(double szer, double wys)
	{
		this->szer = szer;
		this->wys = wys;

	}
	~Kwadrat() 
	{

	}

	void wart(double szer, double wys)
	{
		if (szer > 0);
		if (wys > 0);
		this->szer = szer;
		this->wys = wys;

	}

	double pole(double p)
	{
		p = szer * wys;
		cout << "Pole to:" << p << endl;
		cout << "Aktualne boki kwadratu to: \nSzerokosc = " << szer << "\nWysokosc = " << wys;
		return p;
	}

};





int main()
{
	Kwadrat k1;
	k1.wart(5, 5);
	Kwadrat k2;
	k2.pole(5);


}

