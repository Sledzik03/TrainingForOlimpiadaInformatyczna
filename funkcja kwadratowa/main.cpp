#include <iostream>
#include <math.h>

using namespace std;

double a,b,c,delta;
double x1,x2;

int main()
{
    cin >> a >> b >> c;
    if (a!=0)
    {
        delta = pow(b,2)-(4*a*c);
        if (delta >0)
        {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout << "x1= " << x1 << " " << "x2= " << x2 <<endl;
            return 0;
        }
        else if(delta == 0)
        {
            x1=(-b)/(2*a);
            cout << "Jedno miejsce zerowe w punkcie x1= " << x1 << endl;
            return 0;
        }
        else if (delta <0)
        {
            cout << "brak rozwiazan, delta < 0" << endl;
            return 0;
        }
    }
    else
        cout << "rownanie liniowe a nie kwadratowe!!!" << endl;

    return 0;
}
