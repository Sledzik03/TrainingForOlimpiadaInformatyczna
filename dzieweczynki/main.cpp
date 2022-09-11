#include <bits/stdc++.h>

using namespace std;

void Gasienica();

int n,c;
int p,k;
int ch,dz;
int w;
int licz0=0;
int tab[1000*1000+10];
int main()
{
    cin >> n >> c;
    for (int i=1; i<=n; i++)
    {
        cin >> tab[i];
        if (tab[i]==1)
            ch++;
        if (tab[i]==0)
            dz++;
    }
    if (dz < c)
    {
        cout << "NIE";
        return 0;
    }
    for (int i=1;i<=n; i++)
        {
            if(tab[i]==0)
            {
                p=i;
                licz0=1;
                break;
            }
        }
    k = p + 1;
    for (int i=k; i<=n; i++)
    {
    if (tab[i]==0)
            licz0++;
       if (licz0==c)
        {k = i;
        w = k - p -(c-1);
        break;}
    }
    Gasienica();
    cout << w;
    return 0;
}

void Gasienica()
{
    int tmp=k;
    while(tmp<=n)
    {
        tmp++;
        if (tab[tmp]==0) {break;}
        if (tmp==n) break;
    }

    //licz0++;
    if (tab[tmp]==0)
    {
        k=tmp;
        p++;
        while(tab[p]!=0) p++;
        w = k - p -(c-1);
        if (k<n) Gasienica();
    }
}
