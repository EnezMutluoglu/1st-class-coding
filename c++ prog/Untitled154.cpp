#include <iostream>
using namespace std;
int main()
{int a=1,b;
setlocale(LC_ALL,"turkish");
cout<<"L�tfen fakt�riel al�nacak say�y� girin: ";
cin>>b;
for(int f=1;f<=b;f++)
{a=a*f;
}
cout<<b<<"!="<<a;
}
