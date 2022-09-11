#include <iostream>

using namespace std;

int main()
{
    char n;
    int liczba,a,b;
    cin >> liczba;
    cin >> n;


    for (int i=0;i<liczba;i++)
{   cin >> a >> b;
        switch (n)
    {
    case '+':
        {
        cout << a+b << endl;
        break;
        }
    case '-':
        {
            cout << a-b << endl;
            break;
        }
    case '*':
        {
            cout << a*b << endl;
            break;
        }
    case '/':
        {
            if (b==0)
            {
                cout << "nie dziel przez 0"<<endl;
            }
            else
            {
                cout << a/b << endl;
            }
            break;
        }
    case '%':
        {
         if (b==0)
         {
         cout << "Nie dziel przez 0"<<endl;
         }
          else {  cout << a % b << endl;}
            break;
        }
    }
}
    return 0;
}
