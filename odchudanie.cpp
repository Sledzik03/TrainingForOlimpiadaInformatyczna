#include<iostream>
using namespace std;
int main(){
  int n,a,maxw=0,wynik=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a;
    if(a>maxw)
      maxw=a;
    if(maxw-a>wynik)
      wynik = maxw - a;
  }
    cout<<wynik;
}
