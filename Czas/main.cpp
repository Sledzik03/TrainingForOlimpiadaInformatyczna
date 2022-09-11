#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int czas;
    cin >> czas;
    int g,m,s;
    g = czas % 3600;
    m = g % 60;
    s = m % 60;
cout << g << endl;
cout << m << endl;
cout << s << endl;


    return 0;
}
