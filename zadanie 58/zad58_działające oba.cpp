#include <bits/stdc++.h>
using namespace std;

int Z1[1100];
int T1[1100];
int Z2[1100];
int T2[1100];
int T3[1100];
int Z3[1100];

int AnyToDec(string L, int S){
	bool ujemna=false;
	if (L[0]=='-')
		ujemna=true;
	int wynik=0;

	if (ujemna)
		for (int i=1 ; i<L.size() ; i++)
			wynik=wynik*S+L[i]-'0';
	else
		for (int i=0 ; i<L.size() ; i++)
			wynik=wynik*S+L[i]-'0';

	if (ujemna)
		return wynik*-1;
	return wynik;
}

int main(){
	string z,t;
	string z2, t2, z3, t3;
	ifstream czytaj ("dane_systemy1.txt");
	ifstream czytaj2 ("dane_systemy2.txt");
	ifstream czytaj3 ("dane_systemy3.txt");
	for (int i=0 ; i<1095 ; i++)
		{
			czytaj >> z >> t;
			czytaj2 >> z2 >> t2;
			czytaj3 >> z3 >> t3;
			Z1[i]=AnyToDec(z,2);
			T1[i]=AnyToDec(t,2);
			Z2[i]=AnyToDec(z2,4);
			T2[i]=AnyToDec(t2,4);
			Z3[i]=AnyToDec(z3,8);
			T3[i]=AnyToDec(t3,8);



		}
		int wynik=0;
        int min1=99999;
        int min2=99999;
        int min3=99999;
        for (int i=0;i<1095;i++)
        {
            if (T1[i]<min1)
                min1=T1[i];
        }
        for (int i=0;i<1095;i++)
        {
            if (T2[i]<min2)
                min2=T2[i];
        }
        for (int i=0;i<1095;i++)
        {
            if (T3[i]<min3)
                min3=T3[i];
        }
        for (int i=0;i<1095;i++)
    {if (Z1[i]%12!=0 && Z2[i]%12!=0 && Z3[i]%12!=0)wynik++;}
        cout << wynik;
        cout << endl;
        string wynik1="";
        string wynik2="";
        string wynik3="";
        bool ujemna1=false;
        bool ujemna2=false;
        bool ujemna3=false;
        if (min1<0)
        {
            ujemna1=true;
            min1=abs(min1);
        }

        if (min2<0)
        {
            ujemna2=true;
            abs(min2);
        }
        if (min3<0)
        {
            ujemna3=true;
            abs(min3);
        }
        while(min1!=0)
        {
            if(min1%2==1)
                wynik1="1"+ wynik1;
            else
                wynik1="0"+wynik1;
            min1=min1/2;
        }
        while(min2!=0)
        {
            if(min2%2!=0)
                wynik2="1"+ wynik2;
            else
                wynik2="0"+wynik2;
            min2 = min2 / 2;
        }
        while(min3!=0)
        {
            if(min3%2!=0)
                wynik3="1"+ wynik3;
            else
                wynik3="0"+wynik3;
            min3 = min3 / 2;
        }
        if (ujemna1==true)
            wynik1="-"+wynik1;
        if (ujemna2==true)
            wynik2="-"+wynik2;
        if (ujemna3==true)
            wynik3="-"+wynik3;
       cout <<  wynik1 << " " <<  wynik2 << " " <<  wynik3;
       ofstream wynikowa("wyniki_zadanie58.txt");
       wynikowa<<"58.1: \n"<<wynik1 << "\n" << wynik2 << "\n" << wynik3 << "\n";
       wynikowa<<"58.2: \n" << wynik;
       wynikowa.close();


}
