#include <bits/stdc++.h>
using namespace std;
int N,M[100000];
int steps[100000];
int licz=0;
int powersof(int, int);
int main()
{
    cin>>N;
    steps[1]=1;
    for (int i=1; i<=N;i++)
    {
        steps[i]=i;
        cout << M[i]<<endl;

    if (steps[i] + 1<steps[i+6]);
    }


    return 0;
}
int powersof(int M[100000],int N)
{
    for (int i = 1; i<N; i++)
    {
        M[i] = pow(6,i);
        M[i+1] = pow(9,i);
        cout << M[i]<< endl;
    }
}
