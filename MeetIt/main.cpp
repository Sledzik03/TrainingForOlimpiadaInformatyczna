#include <bits/stdc++.h>

using namespace std;
string N;
unsigned int K;
stringstream ss;
void dzielenie(string,string)
int main()
{
    cout << fixed;
    cout << setprecision(0);
    cin >> N;

    K=sqrt(N);
    cout << K<<endl;
    if (pow(K,2)!=N)
    {
        cout << pow(K,2)<<endl;
    cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}

