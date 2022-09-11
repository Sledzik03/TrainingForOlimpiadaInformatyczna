#include <iostream>
#include <math.h>
using namespace std;
int x;
int main()
{
    cin >> x;
    switch(x)
    {
    case -1000 ... 0:
        {
            x=x*2;
            cout << x<<endl;
            break;
        }
    case 1:
    {
        cout << "f(x) =  -10" <<endl;
        break;
    }
    case 3:
        {
            x= pow(x-1,4);
            cout << "f(x) = " << x << endl;
            break;
        }
    case 6:
        {
            x=sqrt(x-4);
            cout << "f(x) = " << x << endl;
            break;
        }
    default:
    {
    cout << "f(x) = 0" << endl;
    break;
    }
    }
    return 0;
}
