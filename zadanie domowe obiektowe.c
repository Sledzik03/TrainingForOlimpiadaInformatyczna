
// programowanie obiektowe test.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>
using namespace std;

class Auta
{
    public:

    string model;
    string marka;
    int przebieg;
    int rocznik;
    // metody
    void wpisz()
    {
        cout << "Dodaj Auto" << endl;
        cout << "Podaj marke: ";
        cin >> gatunek;
        cout << "Podaj model: ";
        cin >> imie;
        cout << "Podaj rocznik: ";
        cin >> wiek;
        cout << "Podaj przebieg: ";
        cin >> przebieg;
    }
    void wypisz()
    {
        if (gatunek == "audi") cout << imie << " lat: " << wiek << " :szpaner!";
        else if (gatunek == "porsche") cout << imie << " lat: " << wiek << " :Masz kase ziomek!";
        else if (gatunek == "alfa") cout << imie << " lat: " << wiek << " :sportowy samochod!";
        else cout << "Nieznana marka";
    }
};

int main()
{
    Auta a1;
    a1.wpisz();
    a1.wypisz();
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
