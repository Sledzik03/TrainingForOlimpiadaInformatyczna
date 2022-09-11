#include<bits/stdc++.h>
using namespace std;

double M[]={50000,20000,10000,5000,2000,1000,500,200,100,50,20,10,5,2,1};

int main(){
    double K;
    cin>>K;
    K*=100;
    int KI=K+0.5;
    stack<double>kolejka;
    int i=0;
    while(KI>0)
    {
        while(KI>=M[i])
        {
            kolejka.push(M[i]/100);
            KI-=M[i];
        }
        i++;
        if(i>14)
            break;
    }
    int x=kolejka.size();
    for (int i=0;i<x;i++)
    {
        cout << kolejka.top() << " ";
        kolejka.pop();
    }
}
