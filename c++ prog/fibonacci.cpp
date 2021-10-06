#include <iostream>
using namespace std;


int main()
{int a=0,b=1,c=0,toplam;
setlocale(LC_ALL,"Turkish");
setlocale(LC_ALL,"utf-8");
cout<<"fibonacci dizisi sayý kontrol:";
cin>>a;
cout << b;
for (int d; d <= a;d++); {
	toplam=b+c;
	cout << toplam << " ";
	int db;
	db=b;
	b=toplam;
	c=db;
	}
}
