#include <bits/stdc++.h>
using namespace std;

int n;
int d[500002];
int t[500002];
int termin=1;
int obecnydzien=1;
bool flaga[500002];
int wynik=0;
int iletrue=0;
int ilefalse=0;



int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> t[i] >> d[i];
        if (d[i]>termin)
            termin = d[i];
    }
    for (int i=0;i<n;i++)
    {
    if (obecnydzien==d[i])
    {
        if(t[i]>obecnydzien)
        {
            flaga[i]=true;
            iletrue++;
            continue;
        }
        if (t[i]<obecnydzien)
        {
            for(int j=t[i];j>0;j--)
            {
                if (flaga[j]==false)
                    break;
                else
            {
                flaga[j]=false;
            }
            }
        }
        if (t[i]==1)
        {
            if(d[i+1]>d[i]||t[i+1]>t[i])
                flaga[i]=false;
        }
    }
    obecnydzien++;
    flaga[i]==true;

    }



}
