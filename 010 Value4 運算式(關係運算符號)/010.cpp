#include <iostream>

using namespace std;

int main(){
	/* 
	bool a = 0,b = 1,c = 2;  //�D0�Y���u 
	cout<<a<<"\n";
	cout<<b<<"\n";
	cout<<c<<"\n";
	*/
	
	/*
	int a = 10,b = 20;
	bool c = a > b;
	cout<<c<<"\n";
	*/
	
	/*
	int a = 10,b = 20;
	bool c = a = b;  //a=b, c=a => c=true
	cout<<c<<"\n";
	*/
	
	/*
	int a = 10,b = 20;
	bool c = a == b;  // == => �O�_�۵� 
	cout<<c<<"\n";
	*/
	
	int a = 5,b = 6;
	bool c = ++a > b--;
	cout<<a<<"\n";
	cout<<b<<"\n";
	cout<<c<<"\n";
	
	return 0;
}
