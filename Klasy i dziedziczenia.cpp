#include <iostream>
using namespace std;
class Pracownik
{
public:
	string imie, nazwisko;
	
	Pracownik(string Jan = "Jan", string Kowalski = "Kowalski")
	{
		imie = Jan;
		nazwisko = Kowalski;
	}
	void wypisz()
	{
		cout << "Imie i nazwisko: " << imie << " " << nazwisko << endl;
	}

};

class Menadzer :public Pracownik        //Klasa menadzer dziedziczy publicznie z klasy pracownik
{
public:
	int pensja;

	Menadzer(string Jan = "Jan", string Kowalski = "Kowalski", int p = 3000)
		:Pracownik(Jan, Kowalski)            //Odwolanie sie do konstruktora klasy Pracownik
	{
		pensja = p;
	}

	void wypisz()
	{
		Pracownik::wypisz();                //wywolanie funkcji bazowej
		cout << "Pensja: " << pensja << endl;          //i wypisanie pensji
	}

};

class Szef :public Menadzer           
{
	int premia;
public:
	Szef(string Jan = "Jan", string Kowalski = "Kowalski", int p = 3000, int pr = 200)
		:Menadzer(Jan, Kowalski, p)
	{
		premia = pr;
	}

	void wypisz()
	{
		Menadzer::wypisz();
		cout << "Premia: " << premia << endl;
	}
};


int main()
{
	Szef s1;
	s1.wypisz();


	return 0;
}

