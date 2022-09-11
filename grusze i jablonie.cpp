#include <bits/stdc++.h>
using namespace std;

int n;
int z;
int t[1000000];

int main()
{
    cin >> n;
    z = n-1;
    for (int i=0;i<n;i++)
    {
        cin >> t[i];
    }

    for (int i=0;i<n;i++)
    {
        if (t[i]==0)
        {
            z=z-1;
        }
        else if (t[i]==1)
        {
            for (int j=n-1;j<i;j--)
            {
                if (t[j]==1)
                    z--;
                else if (t[j]==0)
                    z=z;

            }
        }
        break;
    }
    cout << z;
}
