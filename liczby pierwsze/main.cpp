#include <iostream>

using namespace std;
long long x,n;
int main()
{
   bool flaga=true;

   cin >> x;
   for (int i=0; i<x;i++)
   {
       cin >> n;
       if ((n%2==0 && n!=2) || n==1)
       {
           cout << "NIE"<<endl;
       }
        else
        {
            for (int k=3;k*k<=n;k=k+2)
            {
                if (n%k == 0)
                {
                    flaga = false;

                }
            }
            if (!flaga)
            {
                cout << "NIE"<<endl;
                flaga = true;
            }
            else
            {
                cout << "TAK"<<endl;

            }
        }
   }

    return 0;
}
