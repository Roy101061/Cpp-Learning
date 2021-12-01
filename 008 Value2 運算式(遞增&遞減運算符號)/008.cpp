#include <iostream>

using namespace std;

int main(){
	/*
	int a = 10;
	a++;  // a++ => a=a+1
	cout<<a<<"\n";
	++a;  // ++a => a=a+1
	cout<<a<<"\n";
	a--;  // a-- => a=a-1
	cout<<a<<"\n";
	--a;  // --a => a=a-1
	cout<<a<<"\n";
	*/
	
	/*
	int a=5,b=6,c;
	a = a + 1;
	c = a + b;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";  //a=6,b=6,c=12
	*/
	
	/*
	int a=5,b=6,c;
	c = a + b;
	a = a + 1;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";  //a=6,b=6,c=11
	*/
	
	/*
	int a=5,b=6,c;
	//c = a + b;
	//a = a + 1;
	c = a++ + b;  // c=a+b, a++ (先運算a+b) 
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	*/ 
	
	int a=5,b=6,c;
	//c = a + b;
	//a = a + 1;
	c = ++a + b;  // ++a, c=a+b  (先運算++a) 
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	
	return 0;
}
