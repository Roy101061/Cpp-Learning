#include <iostream>

using namespace std;

int main(){
	
	/*
	int a,b,c=0;
	cout<<"Please enter a number => ";
	cin>>a;
	cout<<"Please enter another number => ";
	cin>>b;
	
	if(a>b)
		c=a;
	if(a<b)
		c=b;
	if(a==b)
		c=a;
	
	cout<<"The bigger number is:"<<c<<endl;
	*/
	
	/*
	int a,b,c=0;
	cout<<"Please enter a number => ";
	cin>>a;
	cout<<"Please enter another number => ";
	cin>>b;
	
	c=a;
	if(c<b)
		c=b;
	
	cout<<"The bigger number is:"<<c<<endl;
	*/
	
	int a,b,c;
	cout<<"Please enter a number => ";
	cin>>a;
	cout<<"Please enter another number => ";
	cin>>b;
	cout<<"Please enter another number => ";
	cin>>c;
	
	int d=a;
	if(d<b)
		d=b;
	if(d<c)
		d=c;
		
	cout<<"The bigger number is:"<<c<<endl;
	
	
	return 0;
}

