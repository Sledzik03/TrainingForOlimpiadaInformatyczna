#include <bits/stdc++.h>

using namespace std;

int n[1000*1000+5];
int ile;
int i=0;

int main()
{
    
    cin >> ile;
    for (i=0;i<ile;i++)
    {
        cin >> n[i];
    }

    if (n[i]<n[i]+1)
    {
        cout << "TAK"<<endl;
    }
    else
    {
        cout << "NIE"<<endl;
    }
    return 0;
}
