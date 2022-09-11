
// programowanie obiektowe test.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
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

// Porady dotycz¹ce rozpoczynania pracy:
//   1. U¿yj okna Eksploratora rozwi¹zañ, aby dodaæ pliki i zarz¹dzaæ nimi
//   2. U¿yj okna programu Team Explorer, aby nawi¹zaæ po³¹czenie z kontrol¹ Ÿród³a
//   3. U¿yj okna Dane wyjœciowe, aby sprawdziæ dane wyjœciowe kompilacji i inne komunikaty
//   4. U¿yj okna Lista b³êdów, aby zobaczyæ b³êdy
//   5. Wybierz pozycjê Projekt > Dodaj nowy element, aby utworzyæ nowe pliki kodu, lub wybierz pozycjê Projekt > Dodaj istniej¹cy element, aby dodaæ istniej¹ce pliku kodu do projektu
//   6. Aby w przysz³oœci ponownie otworzyæ ten projekt, przejdŸ do pozycji Plik > Otwórz > Projekt i wybierz plik sln
