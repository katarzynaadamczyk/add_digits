#include <iostream>

using namespace std;

unsigned int add_digits(unsigned int liczba);
unsigned int add_digits_2(unsigned int liczba);

int main()
{
    cout << "Witaj w programie add digits " << endl;
    unsigned int n {1};
    while (n>0)
    {
        cout<<"Podaj liczbe, dla ktorej mam policzyc sume cyfr."<<endl;
        cout<<"Jesli podasz 0 to konczymy gre."<<endl;
        cin>>n;
        unsigned int wynik = add_digits(n);
        cout<<"Wynikiem algorytmu 1 jest: "<<wynik<<endl;
        wynik = add_digits_2(n);
        cout<<"Wynikiem algorytmu 2 jest: "<<wynik<<endl;
        cout<<endl<<endl;
    }
    return 0;
}


unsigned int add_digits(unsigned int liczba)
{
    if (liczba>0)
    {
        unsigned int suma {};
        while (liczba>0)
        {
            suma += liczba %10;
            liczba /= 10;
        }
        if (suma / 10 == 0)
            return suma;
        else
        {
            suma = add_digits(suma);
            return suma;
        }
    }
    else
        return 0;
}

unsigned int add_digits_2(unsigned int liczba)
{
    if (liczba>0)
    {
        unsigned int suma {liczba};
        while (suma>9)
        {
            liczba = suma;
            suma = 0;
            while (liczba>0)
            {
                suma += liczba %10;
                liczba /= 10;
            }
        }

        return suma;
    }
    else
        return 0;
}
