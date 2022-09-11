#include <iostream>
#include <queue>
#include <vector>
#include <conio.h>
#include <windows.h>
using namespace std;

vector <int> liczby;
int liczba_liczb;

int main()
{
    cout << "podaj liczby i na koncu podaj zero: ";

    do{

    cin >> liczba_liczb;
    liczby.push_back(liczba_liczb);
    }
    while (liczba_liczb != 0);
    system("cls");
    for (int i=0; i < liczby.size();i=i+3)
    {
        cout << liczby[i]<<" "<<endl;

    }

    return 0;
}
