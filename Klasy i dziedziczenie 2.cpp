#include <iostream>
using namespace std;


class Tbudynek {
    string kod_pocztowy;
    string miejscowosc;
    string ulica;
    string nr_domu;
    string numer_mieszkania;

public:

    Tbudynek() :kod_pocztowy(""), miejscowosc(""), ulica(""), nr_domu("")
    {
            
    }

    Tbudynek(string kodpocztowy, string miejscowosc, string ulica, string nrdomu, string nrmieszkania)
    {      
        this->kod_pocztowy = kodpocztowy;
        this->miejscowosc = miejscowosc;
        this->ulica = ulica;
        this->nr_domu = nrdomu;
        this->numer_mieszkania = nrmieszkania;
    }
    
    ~Tbudynek()
    {
        
    }


    friend ostream& operator<<(ostream& s, const Tbudynek& b)
    {
       s << b.kod_pocztowy << " " << b.miejscowosc << " " << b.ulica << " " << b.nr_domu << " " << b.numer_mieszkania << endl;
        return s;
    }
};

class TbudynekMieszkalny : public Tbudynek
{
    int liczba_mieszkancow;

public:
    TbudynekMieszkalny() :liczba_mieszkancow(0)
    {

    }
    ~TbudynekMieszkalny()
    {

    }

};


int main()
{
    Tbudynek bud("82-300", "Elblag", "Pokorna", "11", "42");
    cout << "Adres: " << bud << endl;
    return 0;
}

