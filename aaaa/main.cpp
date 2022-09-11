#include <bits/stdc++.h>
using namespace std;

int n,j;
int z;
int t[1000000];

int main()
{
    cin >> n;
    z = n-1;
    j=n-1;
    for (int i=0;i<n;i++)
    {
        cin >> t[i];
    }
    if (n==2)
    {
        cout << z;
        return 0;
    }
    for (int i=0;i<n;i++)
    {
        if (t[i]==0 && (t[i+1]==0 || t[i+1]==1))
        {
            z--;
        }
        else
            if (t[i]==1)
            {
                for (j;j>0;j--)
                {
                    if (t[j]==1)
                        {
                            z--;
                        }
                    else
                        if (t[j]==0)
                        {
                            cout << z;
                            return 0;
                        }

                }
            break;
            }
    }
    cout << z;
}
