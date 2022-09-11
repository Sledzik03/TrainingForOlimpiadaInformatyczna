#include <iostream>
using namespace std;
int n;
int z[1000];
int em[1000];
int ed[1000];
int main ()
{
 cin >> n;
 for (int i=0;i<n;i++)
 {
     cin >> z[i];
 }
 for (int i=1;i<=n; i++)
 {
     if (z[i]<=z[i-1])
     {
         em[i] = z[i];
         ed[i] = z[i-1];
         i++;
     }
     cout <<" zbior em[i] = " << em[i] << " ";
     cout << " zbior ed[i] = " <<  ed[i] << " ";
 }
}


