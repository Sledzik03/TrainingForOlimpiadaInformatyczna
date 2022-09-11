#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int toDec(string s, int base)
{
    int d;
    if (s[0]<65)
{d=int (s[0]-'0');}
else {d = int(s[0]-'A'+10);}
        for (int i=1;i<s.length();i++)
        {
  if (s[i]<65)

  {d = d*base + int(s[i]-'0');}
  else
  {d = d*base + int(s[i]-'A'+10);}
      }
return d;


}

int mx(string s1, string s2, string s3)
{
    int imax=0;
    for (int i)


}



int main()
{
    string x,y,z;
    //cout << sizeof (x);
    while (cin >> x)
    {
        cin >> y;
        cin >> z;
        cout << toDec(x,16)<<endl;
    }
    return 0;
}
