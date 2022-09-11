#include <bits/stdc++.h>

using namespace std;
int N;
unsigned int T[112];
int NWD(int a, int b)
{
	int pom;

  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;
  	}
    return a;
}
int main()
{
    cin >> N;
    for (int i=0;i<N;i++)
    {
        cin >> T[i];
        cout << "NWW"<<T[i]/NWD(T[i],T[N-1])*T[N-1];
    }


    return 0;

}
