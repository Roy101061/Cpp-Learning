#include <iostream>

using namespace std;

int main(){
	/*
	int a,b,c=0;
	cout<<"Please enter a number => ";
	cin>>a;
	cout<<"Please enter another number => ";
	cin>>b;
	
	if(a > b)
		c = 1;
	if(a < b)
		c = 2;
	
	if(c == 0)
		cout<<"Same\n";
	if(c == 1)
		cout<<"A is bigger\n";
	if(c == 2)
		cout<<"B is bigger\n";
	*/
	
	/*
	int value=0,a,b,c,d.e;
	cout<<"Please enter a number => ";
	cin>>a;
	cout<<"Please enter another number => ";
	cin>>b;
	cout<<"Please enter another number => ";
	cin>>c;
	cout<<"Please enter another number => ";
	cin>>d;
	
	if(a > value){
		value = a;
		e = 1;
	}
	if(b > value){
		value = b;
		e = 2;
	}
	if(c > value){
		value = c;
		e = 3;
	}
	if(d > value){
		value = d;
		e = 4;
	}
	
	if(e == 0)
		cout<<"Same!\n";
	if(e != 0)
		cout<<"Num. "<< e <<" is bigger\n";
	*/
		// ¡ôa lot bug
	
	int value,a,b,c,d,e;
	cout<<"Please enter a number => ";
	cin>>a;
	cout<<"Please enter another number => ";
	cin>>b;
	cout<<"Please enter another number => ";
	cin>>c;
	cout<<"Please enter another number => ";
	cin>>d;
	
	value = a;
	e = 1;
	
	if(b > value){
		value = b;
		e = 2;
	}
	if(c > value){
		value = c;
		e = 3;
	}
	if(d > value){
		value = d;
		e = 4;
	}
	if(a == b && b == c && c == d)
		e = 0;
	
	if(e == 0)
		cout<<"Same!\n";
	if(e != 0)
		cout<<"Num. "<< e <<" is bigger\n";
	
	return 0;
}

