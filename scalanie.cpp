#include <bits/stdc++.h>
 using namespace std;
int n,a,p0=0,pO,p1=0,pI,o0,o1;
int main() {
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a==0&&p0==0){
            pO=i;
            p0++;
        }
        if(a==1&&p1==0){
            pI=i;
            p1++;
        }
        if(a==0)
            o0=i;
        if(a==1)
            o1=i;
    }
    if(o0-pI>o1-pO)
        cout<<o0-pI;
    else
        cout<<o1-pO;
}
