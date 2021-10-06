#include <iostream>
using namespace std;
int main()
{setlocale(LC_ALL,"Turkish");//türkçe uyarlama.
short int final,gec;
double a,b,sonuc,vize;
cout<<"lütfen geçme notunuzu girin:";
cin>>gec;
system("cls");
cout<<"Lütfen vize notunuzu giriniz=>"<<'\t';
cin>>vize;
if(vize>0){
	sonuc=gec;
	a=(double)vize*0.4;
	b=sonuc-a;
	system("cls");
	cout<<"dersi geçebilmen için finalden alman gereken en düþük not:\n";
	cout<<b*1.60;
	system("PAUSE");
}
else if(vize==0){
	b=100;
	system("cls");
	cout<<"dersi geçebilmen için finalden alman gereken en düþük not:\n";
	cout<<b;
		system("PAUSE");
}
else
cout<<"!!!LÜTFEN POZÝTÝF BÝR SAYI GÝRÝNÝZ";
	system("PAUSE");

}
