#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"please enter a number"<<"\n";
	cin>>a;
	cout<<"please enter another number"<<"\n";
	cin>>b;
	
	int c,d,e,f,g;
	c = a + b;
	d = a - b;
	e = a / b;  // /:���H(�L����˥h�p��) 
	f = a * b;
	g = a % b;  // %:���l�� 
	
	cout<<a<<" + "<<b<<" = "<<c<<"\n";
	cout<<a<<" - "<<b<<" = "<<d<<"\n";
	cout<<a<<" / "<<b<<" = "<<e<<"\n";
	cout<<a<<" * "<<b<<" = "<<f<<"\n";
	cout<<a<<" % "<<b<<" = "<<g<<"\n";
	
	return 0;
}
