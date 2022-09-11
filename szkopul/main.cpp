#include <bits/stdc++.h>

using namespace std;
int licz1=0,licz0=0;
int n;
int a[1000*1000+12];
vector <int> v;

int main()
{
    cin >> n;
    for (int i=0;n>i;i++)
    {
        cin >> a[i];
        //cout << a[i];
        v.push_back(a[i]);
        cout << v[a[i]];
        if (a[i]==1)
        {
            licz1++;
        }
        else
        {
            licz0++;
        }


    }
    do
    {

    }

    return 0;
}
