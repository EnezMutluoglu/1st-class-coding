#include <iostream>
using namespace std;
int main()
{setlocale(LC_ALL,"Turkish");//t�rk�e uyarlama.
short int final,gec;
double a,b,sonuc,vize;
cout<<"l�tfen ge�me notunuzu girin:";
cin>>gec;
system("cls");
cout<<"L�tfen vize notunuzu giriniz=>"<<'\t';
cin>>vize;
if(vize>0){
	sonuc=gec;
	a=(double)vize*0.4;
	b=sonuc-a;
	system("cls");
	cout<<"dersi ge�ebilmen i�in finalden alman gereken en d���k not:\n";
	cout<<b*1.60;
	system("PAUSE");
}
else if(vize==0){
	b=100;
	system("cls");
	cout<<"dersi ge�ebilmen i�in finalden alman gereken en d���k not:\n";
	cout<<b;
		system("PAUSE");
}
else
cout<<"!!!L�TFEN POZ�T�F B�R SAYI G�R�N�Z";
	system("PAUSE");

}
