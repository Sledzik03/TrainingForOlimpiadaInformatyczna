#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <fstream>


using namespace std;

string haslo;
string login;
fstream zapis;



int main()
{
      cout << "Rejestracja"<<endl;
      cout << "Login: ";
      cin >> login;
      cout << "Haslo: ";
      cin >> haslo;
      system("cls");
    zapis.open("Rejestracja.txt",ios::out);

    zapis<<login<<endl;
    zapis<<haslo<<endl;
    zapis.close();
    zapis.open("Rejestracja.txt", ios::in);
    if (zapis.good()==false) cout<<"Plik nie zostal odczytany"<<endl;

    cout << "podaj login: ";

    cout << "podaj haslo: ";
    if (haslo == "admin")
    {
        cout << "witaj w panelu glownym!"<< endl;
    }
    else
    {
        for (int i=0;i<10000000;i = i+1000)
        {
            cout << "try again!"<<endl;
            Sleep(i);
            cout << "password: ";
        }
    }
    return 0;
}
