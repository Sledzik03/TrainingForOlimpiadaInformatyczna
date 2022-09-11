#include <bits/stdc++.h>
using namespace std;

int n=0;
int a=0;
int main()
{
    cin >> n;
    for (int i = 1; i<=n;i++)
        if (n%1 == 0)
            a++;
    /*if (n%3 == 0)
        a++;
    if (n%5 == 0)
        a++;
    if (n%n==0)
        a++;*/
    cout << a;
}
