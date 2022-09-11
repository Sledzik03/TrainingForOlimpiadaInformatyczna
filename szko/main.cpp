#include <bits/stdc++.h>

using namespace std;

int NWD(int x, int y);

int T[1000*1000+5];

int W[3000*1000+5];

int wynik=0;

set <int> S;

set <int>::iterator p;

vector <int> V;

int main()

{
    int n;
    cin >> n;

        for (int i=0;i<n;i++)

        {

            cin >> T[i];
        }
        for (int i=0;i<n;i++)

        {


                W[T[i]]++;
                //cout << W[T[i]]<<endl;
                S.insert(T[i]);

        }
        /* SPRAWDZENIE TABLICY ZLICZJACEJ*/

        int m=3000003;     //m=30000003

        for (int i=0;i<m;i++)
{
           /* if (W[i])

                {
                    //cout<<"\n"<<i<<"=>"<<W[i];
                }*/
                if (W[i]==W[i+1])
                {
                    wynik++;
                }


}
        /* sprawdz seta */

        cout<<endl;

        for(p=S.begin() ; p!=S.end() ; p++)

        {
            //cout<<*p<<" ";
            V.push_back(*p);

        }

        /*spr zaw vect*/

        cout<<endl;

        for(int i=0 ; i<V.size() ; i++)
{           for (int j=i+1;j<V.size();j++)
           {
               if (NWD(V[i],V[j])==1)
               {
                   wynik++;
               }
           }
}
    cout << wynik;
    return 0;

}

int NWD(int x, int y)

{

    while(x!=y)

    {

        if (x>y)

        {

            x=x-y;

        }

        else

        {

            y=y-x;

        }

    }

return x;

}
