#include <bits/stdc++.h>
using namespace std;
int n;
bool a[102];
int licznik=0;				//licznik godzin na uczelni
int main()
{
	cin >> n;
	for (int i=0;i<n;i++)
		{
		cin >> a[i];

		if (a[i]==true)
		{
			licznik++;
		}
		if (a[i]==0 && a[i+1]==0)
		{
			//moze jechac do domu
			licznik++;
		}

		}
		if (n==1)
		{

		if(a[1]==0)
			{
				cout << "0" << endl;
			}
			else
			{
				cout << licznik<< endl;
			}}
		else {cout << licznik <<endl;}
return 0;
}
