#include <bits/stdc++.h>
using namespace std;

bool anagram (string a, string b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if (a==b)
        return true;
    else
        return false;

}
string wyniki[1001];
int main()
{
    int n;
    string h,d;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> h >> d;
        if (anagram(h,d))
            wyniki[i]="TAK";
        else
            wyniki[i]="NIE";
    }
    for (int i=0;i<n;i++)
    {
        cout << wyniki[i] << endl;
    }
}
