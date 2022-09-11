#include <bits/stdc++.h>
using namespace std;

long long p,q,N,fi,D,kod,wielok=0,S,e=1;

int power_mod(int a, int b, int c)
{
    int temp=1;
    a = a%c;
    for (int i=1; i<=b;i++)
    {
        temp = temp*a;
        temp = temp%c;
    }
    return temp;

}
int NWD(int a, int b)
{
    int pom;

	while(b!=0)
    {
		pom = b;
		b = a%b;
		a = pom;
	}

    return a;
}
int main()
{
    cout << "podaj liczby do zakodowania: ";
    cin >> kod;
    cout << "Podaj liczbe 1: ";
    cin >> p;
    cout << "Podaj liczbe 2: ";
    cin >> q;
    N=p*q;//klucz pub + priv
    fi = (p-1) * (q-1);//a musi byc wieksze od b
    do
    {
     e++;//klucz pub
    }while(NWD(fi,e)!=1);
    cout << e;
    do
    {
        wielok++;
    }while(((wielok*fi)+1)%e!=0);
    cout << wielok<<endl;

    D = ((wielok*fi)+1)/e;//klucz priv
    cout << D;
    cout << power_mod(kod, e, N)<<endl;//zaszyfrowana wiadomosc


    return 0;
}
