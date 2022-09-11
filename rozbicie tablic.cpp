#include <bits/stdc++.h>
using namespace std;

int t[100];
int n;
vector <int> m;
vector <int> w;
void dziel();
void Scal();
int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> t[i];

    dziel();
    Scal();
}
void dziel()
{
    if (n%2==0)
    {
          for (int i = 0; i<n;i+=2)
        {
                if (t[i]>t[i+1])
            {
                m.push_back(t[i+1]);
                w.push_back(t[i]);
            }
            else
            {
                m.push_back(t[i]);
                w.push_back(t[i+1]);
            }
        }
    }
    else
    {
        for (int i = 0; i<n-1;i+=2)
        {
                if (t[i]>t[i+1])
            {
                m.push_back(t[i+1]);
                w.push_back(t[i]);
            }
            else
            {
                m.push_back(t[i]);
                w.push_back(t[i+1]);
            }
        m.push_back(t[n-1]);
        }
    }
    //sort(m.begin(),m.end());
    //sort(w.begin(),w.end());
    for (int i=0;i<m.size();i++)
    {
    cout <<"M=  "<< m[i] << " ";
    }
    cout << endl;
    for (int i=0;i<w.size();i++)
    {
    cout << "W=  "<< w[i] << " ";
    }
}
void Scal()
{
    cout << endl;
    int im=0,iw=0;
    for (int i=0;i<n;i++)
    {
        if (t[im] < w[iw])
            t[i] = m[im++];
        else
            t[i] = w[iw++];
    cout << t[i] << " ";
    }
}
