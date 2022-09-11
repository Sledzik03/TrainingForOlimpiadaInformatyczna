#include <iostream>
#include <math.h>
using namespace std;
double x;
int main()
{
    cin >> x;
    if (x<1)
    {
        x = 2*x;
        cout << "f(x)= " <<x<<endl;
    }
    else if(x==1)
    {
        cout << "f(x) = -10" << endl;
    }
    else if(x==3)
    {
        x=pow(x-1,4);
        cout << "f(x) = " << x << endl;
    }
    else if (x==6)
    {
        x=sqrt(x-4);
        cout << "f(x) = "<<x<<endl;
    }
    else
    {
        cout << "f(x) = 0"<<endl;
    }
    return 0;
}
