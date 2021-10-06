#include <iostream>
using namespace std;
int main()
{int a=1,b;
setlocale(LC_ALL,"turkish");
cout<<"Lütfen faktöriel alýnacak sayýyý girin: ";
cin>>b;
for(int f=1;f<=b;f++)
{a=a*f;
}
cout<<b<<"!="<<a;
}
