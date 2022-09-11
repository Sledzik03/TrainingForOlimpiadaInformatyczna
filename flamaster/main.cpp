#include <iostream>

using namespace std;

int main()
{
    string dana;
    int z,licz_lit,w=0,p=0;
    cin >> z;
    for (int i=0;i<z;i++)
    {
        cin >> dana;
        do  {
        do
        {p++;}
        while(dana[w]== dana[p]);
        /*if (p-w==1)*/
        cout << dana[w];
        if (p-w == 2)
        {
            cout << dana[w]<<dana[w];
        }
        else if (p-w>2)
            {
            cout << dana[w]<<p-w;
            }
         w=p;   } while(w<=dana.length());
         cout << endl;
         w=0;
         p=0;

    }

    return 0;
}
