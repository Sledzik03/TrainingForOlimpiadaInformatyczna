#include <bits/stdc++.h>

using namespace std;
int x;
int pom;
void sito(bool *tab, unsigned int n)
{
	for (int i=2; i*i<=n; i++) //przeszukujemy kolejnych kandydatów na pierwsze
    {							//wystarczy sprawdziæ do pierwiastka z n
    							// i<=sqrt(n) - podnosz¹c do kwadratu mamy
    							// i*i <= n
        if(!tab[i])				//jesli liczba jest pierwsza(ma wartosc 0)
		for (int j = i*i ; j<=n; j+=i) //to wykreslamy jej wielokrotnosci
            tab[j] = 1;			//ustawiaj¹c wartosæ na 1
    }
}

int main()
{
    bool *tab;
    cin >> x;
    pom = x;
    tab = new bool [x+1];
	for(int i=2; i<=x; i++) //zerowanie tablicy
		tab[i] = 0;

	sito(tab, x); //przesianie liczb

	cout<<"Kolejne liczby pierwsze z przedzialu [2.."<<x<<"]: "<<endl;
	for(int i=2;i<=x;i++)
        {if(!tab[i])
            {cout << i << " ";
            if (x%i==0)
                {
                    pom = x/i;
                    //cout << i << " ";
                }

                else
            {
                cout << pom;
                break;
            }}}
    if (x==1 || x==0)
        cout <<"BRAK"<<endl;
    cout << endl;
     pom = 0;
  if(x==0)
        cout << "BRAK"<<endl;
  else
  {
      for (int i=1;i<=x;i++)
    {   if (x%i==0)
        {
        cout << i << " ";
        pom++;
        }
    }
  }
  cout << endl;
  cout << pom;
    return 0;
}
