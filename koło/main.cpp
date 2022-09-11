#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string wyraz;
    cin >> wyraz;
    //string to_string(int wyraz);
    int dlug = wyraz.length();
    for (int i=dlug-1;i>=0; i--)
    {
    cout << wyraz[i];
    }




    return 0;
}
