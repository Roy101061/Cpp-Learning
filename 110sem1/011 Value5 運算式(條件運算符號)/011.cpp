#include <iostream>

using namespace std;

int main(){
	/*  && and
		true true => true
		true false => false
		false true => false
		false false => true
	*/
	
	/*  || or
		true true => true
		true false => true
		false true => false
		false false => true
	*/
	
	/*  => a=6 b=4 c=6 d=false
	int a = 5, b = 6, c = 7;
	bool d = ++a >= b-- && --b >= c--;
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"d = "<<d<<"\n";
	*/
	
	/*
	cout<<"Please enter your number"<<"\n";
	int num;
	cin>>num;
	if(num != 0 && 10000 / num > 10){  // != => not
		cout<<"10000 / "<<num<<" > 10"<<"\n";
	}
	else{
		cout<<"10000 / "<<num<<" < 10"<<"\n";
	}
	*/
	
	/*
	int a = 3, c = 7;
	if(!(a > c)){
		cout<<"Hello\n";
	}
	if(a <= c){
		cout<<"Hello\n";
	}
	*/
	
	/*
	bool b = false;
	if(!b){
		cout<<"Hi"<<"\n";
	}
	*/
	
	
	//( §PÂ_ ? True : False ) => ()¥i¬Ù²¤ 
	
	int a = 5, b = 6;
	int c = ( a > b ? a - b : b - a );
	cout<<c;
	
	
	return 0;
}

