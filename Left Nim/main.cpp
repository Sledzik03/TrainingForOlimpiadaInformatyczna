#include <bits/stdc++.h>
using namespace std;
int n,liczlicz=0,a;
int main()
{
        cin >> n;
        liczlicz = 0;
    for (int i=0;i<n;i++)
    {
        cin >> a;
        if (a==1) liczlicz++;

        if (a != 1) break;
        if (i == n-1)liczlicz++;
    }
    if (liczlicz%2==1)
        cout << "Emilio";
    else
        cout << "Valeria";
}
