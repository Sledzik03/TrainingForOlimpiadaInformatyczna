#include <bits/stdc++.h>
using namespace std;

int n;
int a;
vector <int> m;
vector <int> w;


int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a;
        if (a>0)
            w.push_back(a);
        if (a<0)
            m.push_back(a);
        if (a==0)
            continue;
    }
    sort(w.begin(),w.end());
    sort(m.begin(),m.end());
    for (int i=m.size()-1;i>=0;i--)
    {
        cout << m[i] << " ";
    }
    for (int i=w.size()-1;i>=0;i--)
        cout << w[i] << " ";
}
