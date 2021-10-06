#include <iostream>
using namespace std;
int main()
{int a=5;
int *p=&a;
int y=*p;
cout<<a<<*p<<y<<endl;
a=7;
cout<<a<<*p<<y<<endl;
*p=11;
cout<<a<<*p<<y<<endl;
y=22;
cout<<a<<*p<<y<<endl;
}
