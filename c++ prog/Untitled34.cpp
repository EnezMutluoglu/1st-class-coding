#include <iostream>
using namespace std;
int main()
{char input;
int count=0;
bool done=false;
while(!done)
{
	cout<<count<<'\n';
	cout<<"doğrumu yanlışmı seçin";
	cin>>input;
	if(input != 'Y' && input != 'y' && input != 'N' && input != 'n'){
	cout<<"\""<<input<<"\""<<"is not a valid choice"<<'\n';
}
	else if(input=='y'||input=='Y')
	count++;
	else if (input=='n'||input=='N')
	done=true;
	
}
}
