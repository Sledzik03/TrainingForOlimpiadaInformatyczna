// programowanie obiektowe test.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>
using namespace std;

class Zwierze
{
    public:

    string gatunek;
    string imie;
    int wiek;
    // metody
    void dodaj_zwierze()
    {
        cout << "Dodaj zwierze" << endl;
        cout << "Podaj gatunek: ";
        cin >> gatunek;
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj wiek: ";
        cin >> wiek;
    }
    void daj_glos()
    {
        if (gatunek == "kot") cout << imie << " lat: " << wiek << " :Miau!";
        else if (gatunek == "koza") cout << imie << " lat: " << wiek << " :Beeee!";
        else if (gatunek == "krowa") cout << imie << " lat: " << wiek << " :Muuuuu!";
        else cout << "Nieznany gatunek";
    }
};

int main()
{
    Zwierze z1;
    z1.dodaj_zwierze();
    z1.daj_glos();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz�ce rozpoczynania pracy:
//   1. U�yj okna Eksploratora rozwi�za�, aby doda� pliki i zarz�dza� nimi
//   2. U�yj okna programu Team Explorer, aby nawi�za� po��czenie z kontrol� �r�d�a
//   3. U�yj okna Dane wyj�ciowe, aby sprawdzi� dane wyj�ciowe kompilacji i inne komunikaty
//   4. U�yj okna Lista b��d�w, aby zobaczy� b��dy
//   5. Wybierz pozycj� Projekt > Dodaj nowy element, aby utworzy� nowe pliki kodu, lub wybierz pozycj� Projekt > Dodaj istniej�cy element, aby doda� istniej�ce pliku kodu do projektu
//   6. Aby w przysz�o�ci ponownie otworzy� ten projekt, przejd� do pozycji Plik > Otw�rz > Projekt i wybierz plik sln
