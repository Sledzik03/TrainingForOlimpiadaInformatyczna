#include <iostream>

using namespace std;

int main()
{
    int N,licznik=1;
    string napis;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> napis;
        for (int k=1;k<napis.length();k++)
        {
            if (napis[k]==napis[k-1] && k<napis.length()-1)
            {
                licznik++;
            }
            else
            {
                if (k==napis.length()-1)
                {
                    licznik++;
                }
                cout << napis[k-1];

                if (licznik>2)
                {
                    cout << licznik;
                }
                else if (licznik == 2)
                {
                    cout << napis[k-1];
                }
                licznik=1;
            }
        }
    }
    return 0;
}
