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
	cout<<"L�tfen yapmak istedi�iniz i�lemi se�iniz. \nToplama ---> - \n��karma ---> - \n�arpma  ---> * \nB�lme   ---> / \n";
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
					cout<<"L�tfen toplanmas� i�in iki de�er giriniz= ";
					cin>>a>>b;
					toplama(a,b);
					cout<<"\nYeni i�lem i�in D'ye, ��kmak i�in N'ye, ayn� i�lemi tekrar yapmak i�in A'ya bas�n�z.\n";
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
					cout<<"L�tfen fark�n�n bulunmas� i�in iki de�er giriniz= ";
					cin>>a>>b;
					cikarma(a,b);
					cout<<"\nYeni i�lem i�in D'ye, ��kmak i�in N'ye, ayn� i�lemi tekrar yapmak i�in A'ya bas�n�z.\n";
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
				cout<<"L�tfen �arpmak i�in iki say� giriniz= ";
				cin>>a>>b;
				carpma(a,b);
				cout<<"\nYeni i�lem i�in D'ye, ��kmak i�in N'ye, ayn� i�lemi tekrar yapmak i�in A'ya bas�n�z.\n";
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
				cout<<"L�tfen b�l�nmesi i�in iki say� giriniz= ";
				cin>>a>>b;
				bolme(a,b);
				cout<<"\nYeni i�lem i�in D'ye, ��kmak i�in N'ye, ayn� i�lemi tekrar yapmak i�in A'ya bas�n�z.\n";
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
