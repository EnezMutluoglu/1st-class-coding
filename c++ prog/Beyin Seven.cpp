#include<iostream>
#include<cmath>
#include <conio.h>
using namespace std;

void toplama(double x,double y)
{
	double t=x+y;
	cout<<t;
	getch();
}

void cikarma(double x,double y)
{
	double c;
	c=x-y;
	cout<<c;
	getch();

}

void carpma(double x,double y)
{
	double c=x*y;
	cout<<c;
	getch();
}

void bolme(double x,double y)
{
	double c=x/y;
	cout<<c;
	getch();
}

int main()
{a:
	system("color a5");
	setlocale(LC_ALL,"Turkish");
	cout<<"Lütfen yapmak istediðiniz iþlemi seçiniz. \nToplama ---> - \nÇýkarma ---> - \nÇarpma  ---> * \nBölme   ---> / \n";
	char ch1;
	char ch2;
	cin>>ch1;
	double a,b;
	switch(ch1)
	{
		case('+'):
			{
				do
				{   system("cls");
					cout<<"Lütfen toplanmasý için iki deðer giriniz= ";
					cin>>a>>b;
					toplama(a,b);
					cout<<"\nYeni iþlem için D'ye, çýkmak için N'ye, ayný iþlemi tekrar yapmak için A'ya basýnýz.\n";
					cin>>ch2;
				}
				while(ch2=='A' || ch2=='a');
				{
					if(ch2=='D' || ch2=='d')
					{
						goto a;
					}
					else if(ch2=='N' || ch2=='n')
					{
						break;
					}
				}
			}
		case('-'):
			{
				do
				{   system("cls");
					cout<<"Lütfen farkýnýn bulunmasý için iki deðer giriniz= ";
					cin>>a>>b;
					cikarma(a,b);
					cout<<"\nYeni iþlem için D'ye, çýkmak için N'ye, ayný iþlemi tekrar yapmak için A'ya basýnýz.\n";
					cin>>ch2;
				}
				while(ch2=='A' || ch2=='a');
				{
					if(ch2=='D' || ch2=='d')
					{
						goto a;
					}
					else if(ch2=='N' || ch2=='n')
					{
						break;
					}
				}
			}
		case('*'):
			{
				do
				{system("cls");
				cout<<"Lütfen çarpmak için iki sayý giriniz= ";
				cin>>a>>b;
				carpma(a,b);
				cout<<"\nYeni iþlem için D'ye, çýkmak için N'ye, ayný iþlemi tekrar yapmak için A'ya basýnýz.\n";
				cin>>ch2;
				}
				while(ch2=='A' || ch2=='a');
				{
					if(ch2=='D' || ch2=='d')
					{
						goto a;
					}
					else if(ch2=='N' || ch2=='n')
					{
						break;
					}
				}
			}
		case('/'):
			{
				do
				{system("cls");
				cout<<"Lütfen bölünmesi için iki sayý giriniz= ";
				cin>>a>>b;
				bolme(a,b);
				cout<<"\nYeni iþlem için D'ye, çýkmak için N'ye, ayný iþlemi tekrar yapmak için A'ya basýnýz.\n";
				cin>>ch2;
				}
				while(ch2=='A' || ch2=='a');
				{
					if(ch2=='D' || ch2=='d')
					{
						goto a;
					}
					else if(ch2=='N' || ch2=='n')
					{
						break;
					}
				}
			}
	}
}
