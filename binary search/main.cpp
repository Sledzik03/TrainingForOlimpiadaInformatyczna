#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int wybor,zakres,licznik=0;

int main()
{
    srand(time(NULL));
    cout << "Witaj!"<<endl;
    cout << "Poziomy"<<endl;
    cout << "poziom 1 | zakres 1-100"<< endl;
    cout << "poziom 2 | zakres 1-1000"<<endl;
    cout << "poziom 3 | zakres 1-1000000"<<endl;
    cout << "Wybierz poziom:";
    cin >> wybor;
    if (wybor == 1)
        zakres = 100;
    if (wybor == 2)
        zakres = 1000;
    if (wybor == 3)
        zakres = 1000000;
    int los;
    los = rand()%zakres+1;
    cout << "zgadnij moja liczbe"<< endl;
    int strzal;
    cout << "dawaj, strzelaj: ";
    while (strzal!=los)
    {

        cin >> strzal;
        if (strzal>los)
            cout <<"Za duzo"<<endl;
        if (strzal<los)
            cout <<"za malo"<<endl;
             licznik++;};
             if (strzal==los)
                cout << "Trafiles po "<<licznik<<" strzalach";
    return 0;
}
