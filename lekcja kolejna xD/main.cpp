#include <iostream>

using namespace std;
int a[60];
int main()
{

    int n;

    cin >> n;
    for (int i=0; i<n;i++)
    {
        cin >> a[i];
        if (a[i]<5)
        {
            cout << "TAK"<<endl;
        }
        else
            {cout << "NIE"<<endl;
            return 0;}
    }

    return 0;
}
