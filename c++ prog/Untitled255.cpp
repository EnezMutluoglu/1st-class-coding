#include <iostream>
using namespace std;
int main()
{int input=0;
int sum=0;
cout<<"sum numara gir:";
while (input>=0){
	cin>>input;
	if(input>=0){
		sum+=input;
	}
}
cout<<"sum="<<sum<<'\n';
}
