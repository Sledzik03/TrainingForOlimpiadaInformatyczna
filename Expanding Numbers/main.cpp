#include <bits/stdc++.h>
using namespace std;
char S[112]; long long K;
int main()
{   cin >> S >> K;
    for (int i = 0; S[i]; ++i)
    { if(S[i]!='1'){cout<<S[i];exit(0);}
    else if((K-1)==i){cout << S[i];exit(0);}}return 0;}
