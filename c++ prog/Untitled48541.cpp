#include <iostream>
using namespace std;
int main()
{int f,a,i;
setlocale(LC_ALL,"Turkish");
f=1;
a=0;
cout<<"l�tfen fonksiyonu al�nacak de�eri girin: ";
cin>>a;
while(i<=a)
{i++;
f=f*i;

 } 
 cout<<"fakt�riel de�eri: "<<f;
}
