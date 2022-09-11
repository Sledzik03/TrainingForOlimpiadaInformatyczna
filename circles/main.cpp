#include <bits/stdc++.h>

using namespace std;

long long x[3012];
long long y[3012];
int liczkol=0;
long long d;
unsigned int r[3012];

int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
       cin >> x[i] >> y[i] >> r[i];

    }
    for(int i=0;i<n;i++)
    {   for (int j=i+1;j<n;j++)
        {   d = pow(x[i]-x[j],2)+pow(y[i]-y[j],2);
                if (d<(pow(r[i]+r[j],2)))
                {
                    liczkol++;
                }
        }
    }
    cout << liczkol;
    return 0;
}
