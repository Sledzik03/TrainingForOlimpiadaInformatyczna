#include <bits/stdc++.h>

using namespace std;
long long S; int N,R;
int main()
{
    cin >> N;

    R = sqrt(N);
    int Z = pow(R);
    if (Z==N)
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
