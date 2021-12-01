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
	e = a / b;  // /:除以(無條件捨去小數) 
	f = a * b;
	g = a % b;  // %:取餘數 
	
	cout<<a<<" + "<<b<<" = "<<c<<"\n";
	cout<<a<<" - "<<b<<" = "<<d<<"\n";
	cout<<a<<" / "<<b<<" = "<<e<<"\n";
	cout<<a<<" * "<<b<<" = "<<f<<"\n";
	cout<<a<<" % "<<b<<" = "<<g<<"\n";
	
	return 0;
}