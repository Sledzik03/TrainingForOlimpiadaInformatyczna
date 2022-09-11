#include <iostream>
#include <fstream>
using namespace std;

int n; //si³a wejsciowa
int m[1000]; // tablica mas
int masa, sila; // sta³a masa i si³a
int l; // wybor w menu
double siila[1000]; // tablica si³
double a[1000]; // tablica przyspieszen

int main()
{
    fstream plik;
    plik.open("pomiary.txt", ios::in|ios::binary);
    cout << "1. Wylicz przyspieszenie a[i]" << endl;
    cout << "2. Wylicz sile N[i]" << endl;
    cout << "Wprowadz liczbe: ";
    cin >> l;
    switch (l)
    {
    case 1:
    {
        cout << "Wprowadz stala sile: ";
        cin >> sila;
        cout << "Ile bedzie mas?: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Wprowadz mase[i]: ";
            cin >> m[i];
        }
        for (int i = 0; i < n; i++)
            a[i] = sila / m[i];
        for (int i = 0; i < n; i++)
            cout << "Przyspieszenie dla i = " << i << " jest rowne " << a[i] << endl;
        break;
    }
    case 2:
    {
        cout << "Wprowadz stala mase: ";
        cin >> masa;
        cout << "Ile bedzie przyspieszen?: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Wprowadz przyspieszenie[i]: ";
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            siila[i] = a[i] * masa;
            cout << "Sila dla i = " << i << " jest rowne " << siila[i] << endl;
        }
        break;
    }
    default:
    {
        cin >> l;
    }
    }
}
