#include <iostream>

using namespace std;

int main(){
	
	/*
	int a = 3.5;  => a = 3
	cout<<a<<endl;
	return 0;
	*/
	
	/*
	int a = 3 * 3 * 3.14159;  => 3*3*3.14159 => a = 28
	cout<<a<<endl;
	return 0;
	*/
	
	double a = 1.234;
	int b = 123 * 456 * a;       //123*456*1.234
	int c = 123 * 456 * (int)a;  //123*456*1
	cout<<b<<endl<<c<<endl;
	return 0;
}
