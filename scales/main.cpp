#include <bits/stdc++.h>
#include <string>

using namespace std;
long long M[100000000];
unsigned long long powersofsix[10000];
unsigned long long powersofnine[10000];
string str;
int licznik=0;
int powers;
int powersof(double,double);
int powersix(int);
int powernine(int);

int powersof()
{
    cin >> str;
    for (int i=1;i<10;i++)
    {
      powersofsix[i] = pow(6,i);
      powersofnine[i] = pow(9,i);
    }
}
int powersix(int nr)
{
    while(nr%6==0)
        nr=nr/6;
    if (nr==1)
        return 1;
    else
        return 0;

}
int powernine(int nrn)
{
    while(nrn%9==0)
        nrn=nrn/9;
    if (nrn==1)
        return 1;
    else
        return 0;
}
int main()
{
    powersof();
    int D = str.length();

    for (int i=1;i<=D;i++)
    {
        if (powersix(i)==1  || powernine(i)==1)
        {
            M[i]=1;
            licznik++;
        }
        else
        {
        if(M[i] + 1 < M[i + 1])
            M[i + 1] = M[i] + 1;
        if(M[i] + 1 < M[i + powersix(i)])
            M[i + 6] = M[i] + 1;
        if(M[i] + 1 < M[i + powernine(i)])
            M[i + 9] = M[i] + 1;
        licznik++;
        }
    }
    cout << licznik;

    return 0;
}

