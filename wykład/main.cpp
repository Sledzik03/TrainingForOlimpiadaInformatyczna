#include <bits/stdc++.h>

using namespace std;
int k,n;
int a[1000005];
int wynik=0;
int liczba_kulek(int);
int liczba_kulek(int m)
{
    wynik=0;
    for (int i=1;i<=n;i++)
    {
        wynik+=a[i]/m;
    }
    return wynik;
}
int main()
{
cin >> n >> k;
for (int i=1;i<=n;i++)
{
    cin >> a[i];
}
int b=liczba_kulek(k);
int x=k, y=2000000;
while (x<y)
{
    int s=(x+y+1)/2;
    if(liczba_kulek(s)<b)
        y=s-1;
    else
        x=s;
}
    cout << x;
    return 0;
}
/*Jezeli w zadaniu jest napisane cos w rodzaju:
"Jakie jest najwieksze k takie ze cos"
    "jakie jest najmniejsze k takie ze cos"
    "zachodzi monotonicznosc"*/
