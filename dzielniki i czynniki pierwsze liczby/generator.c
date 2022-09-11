#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

void sito(bool *tab, unsigned int n)
{
	for (int i=2; i*i<=n; i++) //przeszukujemy kolejnych kandydat�w na pierwsze
    {							//wystarczy sprawdzi� do pierwiastka z n
    							// i<=sqrt(n) - podnosz�c do kwadratu mamy
    							// i*i <= n
        if(!tab[i])				//jesli liczba jest pierwsza(ma wartosc 0)
		for (int j = i*i ; j<=n; j+=i) //to wykreslamy jej wielokrotnosci
            tab[j] = 1;			//ustawiaj�c wartos� na 1
    }
}

int main()
{
	int n;
	bool *tab;

	cout<<"Podaj zakres g�rny przedzia�u: ";
	cin>>n;

	tab = new bool [n+1];

	for(int i=2; i<=n; i++) //zerowanie tablicy
		tab[i] = 0;

	sito(tab, n); //przesianie liczb

	cout<<"Kolejne liczby pierwsze z przedzia�u [2.."<<n<<"]: ";

	for(int i=2;i<=n;i++)
		if(!tab[i])
			cout<<i<<" ";

	cout<<endl;

	delete []tab;

	system("pause");
    return 0;
}
