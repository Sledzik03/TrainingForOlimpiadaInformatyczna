#include <iostream>

using namespace std;

int main()
{
    int n, v1, v2;
    cin >> n;
    for (int i=0; i<n;i++)
    {
        cin >> v1;
        cin >> v2;
        cout << (2 * v1 * v2) / (v1 + v2) << endl;
    }
    return 0;
}
