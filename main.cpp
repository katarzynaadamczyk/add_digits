#include <iostream>

using namespace std;

unsigned int add_digits(unsigned int liczba);
unsigned int add_digits_2(unsigned int liczba);

int main()
{
    cout << "Welcome to add digits console app" << endl;
    unsigned int n {1};
    while (n>0)
    {
        cout << "Please put in a number for which I will count the sum of the digits repeatedly \n"
                "until I get a single number."<<endl;
        cout<<"If you put in 0 the program will end."<<endl;
        cin>>n;
        unsigned int wynik = add_digits(n);
        cout<<"For algorithm 1 the sum is: "<<wynik<<endl;
        wynik = add_digits_2(n);
        cout<<"For algorithm 2 the sum is: "<<wynik<<endl;
        cout<<endl<<endl;
    }
    return 0;
}

//first-thought algorithm, using recursion

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

//second-thought algorithm

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
