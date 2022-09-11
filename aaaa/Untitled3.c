#include <iostream>
using namespace std;

int n;
int znacznik = 0;
int t[1000000];

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> t[i];
    }
    for (int i=0;i<n;i++)
    {
        if (t[i]==0)
        {
            znacznik = znacznik;
            if (znacznik > 1)
            {
                znacznik++;
            }
        }
        else if (t[i]==1)
        {
            znacznik++;
        }
    }
    if (t[i]==0)
        znacznik++;
        else if (t[i+1]==0)
        znacznik++;
    cout << znacznik << " ";
}

