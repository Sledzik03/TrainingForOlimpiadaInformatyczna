#include <iostream>
#define sum(int);
using namespace std;
int result[1000];
bool ret;                       //overall O(k*n);
int k;                          //A recursive approach with memorization
int last_element;
int main()
{
    cin >> k;
    int total;
    total=0;
    total+=sum(k-last_element);
    result[k]=total;
    return(total);
};
void sum(k)
{
    if (k<0)
    {
     ret=0;
    }
    if (k==0)
    {
        ret=1;
    }
    if (result[k]!=-1)
    {
        return(result[k]);
    }

}
//better way with an iterative approach
//This is working in O(n*k);
int results[k];
int p[10000];//prefiks
results[0]=p[0]=1;
for (int i=1;k>=i;i++)
{
    for (last_element in {1...n})
        {
            if (last_element<=sum)
            {
                results[sum]+=results[sum-last_element];
                results[sum]=p[sum-1]-p[sum-n-1];
                p[sum]=p[sum-1]+results[sum];
            }
        }
}
// O(k);
//mozna uzywac gasienicy
//sumy prefiksowe


