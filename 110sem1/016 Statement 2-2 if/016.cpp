#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Please enter a number => ";
	cin>>a;
	cout<<"Please enter another number => ";
	cin>>b;
	if(a>b)
		cout<<a<<" > "<<b<<endl;
	if(a<b)
		cout<<a<<" < "<<b<<endl;
		
	/*
	if(a=b)  //wrong command
		cout<<a<<" = "<<b<<endl;  // => a=b, if b=0 => true ; if b!=0 => false
	*/
	
	if(a==b)
		cout<<a<<" = "<<b<<endl;
	
	return 0;
}

