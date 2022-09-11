// programowanie obiektowe test.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
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

// Porady dotycz¹ce rozpoczynania pracy:
//   1. U¿yj okna Eksploratora rozwi¹zañ, aby dodaæ pliki i zarz¹dzaæ nimi
//   2. U¿yj okna programu Team Explorer, aby nawi¹zaæ po³¹czenie z kontrol¹ Ÿród³a
//   3. U¿yj okna Dane wyjœciowe, aby sprawdziæ dane wyjœciowe kompilacji i inne komunikaty
//   4. U¿yj okna Lista b³êdów, aby zobaczyæ b³êdy
//   5. Wybierz pozycjê Projekt > Dodaj nowy element, aby utworzyæ nowe pliki kodu, lub wybierz pozycjê Projekt > Dodaj istniej¹cy element, aby dodaæ istniej¹ce pliku kodu do projektu
//   6. Aby w przysz³oœci ponownie otworzyæ ten projekt, przejdŸ do pozycji Plik > Otwórz > Projekt i wybierz plik sln
