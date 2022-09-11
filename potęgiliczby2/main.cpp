#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long a;
    unsigned long long licz;
    cin >> a;

        for (unsigned long long i=0;i<=a;i++)
        {
        licz = pow (2,i);


        if (a>=licz)
        {
            cout << licz << endl;
        }
        else
        {
            break;
        }
        }

    return 0;
}
