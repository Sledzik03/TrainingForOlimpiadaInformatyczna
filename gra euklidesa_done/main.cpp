#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int liczba_tur,a,b,t;
    cin >> liczba_tur;
    for (int i=0; i < liczba_tur; i++)
    {
        cin >> a;
        cin >> b;

        if (a < b)
        {
            t = a;
            a = b;
            b = t;
        }
        do
        {
            t = a%b;
            a = b;
            b = t;
        }while (b!=0);
        cout << 2 * a << endl;

    }


    return 0;
}
