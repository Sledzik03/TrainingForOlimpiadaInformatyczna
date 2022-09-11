#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int licznik=0;
    cin >> a >> b >> c;

    while (a+b<0)
    {
        licznik++;
       if (c>0)
            a=a+c;
       else
            a=a-c;
    //cout << a<<" ";
    }
     cout << a << " " << b <<" " << c <<endl;
    cout << "liczba petli: "<<licznik;

    return 0;
}
