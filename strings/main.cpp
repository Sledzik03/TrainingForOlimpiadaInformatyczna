#include <iostream>

using namespace std;

int main()
{
    string s[1..N],t[1..M];
    //longest sub sequence
    // meet it
    // meat   // met because m,e,t
    //O(M*N)   O((N*M)/log(log N*M))
    //DP[N][M]; - result for the case when the strings are s[1..N] and t[1..M].
    for (i in {1..N})
        for (j in {1..M})
            if (s[i]==t[j])
            {
                DP[i][j]=1+DP[i-1][j-1];
            }
            else
            {
                DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
            }
    return 0;
}
