#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
string imie,nazwisko;
int nr_tel;
int main()
{
    //cout << "Wizytowka" << endl;
    //cout << "podaj imie: ";
    //cin >> imie;
    //cout << "podaj nazwisko: ";
    //cin >> nazwisko;
    //cout << "podaj nr telefonu: ";
    //cin >> nr_tel;

    fstream wizytowka;
    wizytowka.open("wizytowka.txt",ios::in);
    if (wizytowka.good()==false)
    {
        cout<<"Plik nie istnieje!!!";
        exit(0);
    }

    string linia;
    int nr_linii=1;

    while(getline(wizytowka,linia))
    {
        switch(nr_linii)
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: nr_tel=atoi(linia.c_str()); break;
        }
        nr_linii++;


    }




    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<nr_tel<<endl;
    wizytowka.close();


    return 0;
}
