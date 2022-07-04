#include <iostream>
#include <string>

using namespace std;

int main(){
	/*
	string name,password;
	
	cout<<"Please enter your name =>";
	cin>>name;
	
	cout<<"Please enter your password =>";
	cin>>password;
	
	bool ans=0;
	if(name=="name"){
		if(password=="1234")
			ans=1;
	}
	
	if(ans)
		cout<<"Welcome!/n";
	if(!ans)
		cout<<"Wrong name or password!/n";
	*/
	
	/*
	string name,password;
	
	cout<<"Please enter your name =>";
	cin>>name;
	
	cout<<"Please enter your password =>";
	cin>>password;
	
	bool ans=1;
	if(name!="name")
		ans=0;
	if(password!="1234")
		ans=0;
	
	if(ans)
		cout<<"Welcome!/n";
	if(!ans)
		cout<<"Wrong name or password!/n";
	*/
	
	/*
	string name,password;
	
	cout<<"Please enter your name =>";
	cin>>name;
	
	cout<<"Please enter your password =>";
	cin>>password;
	
	bool ans=1;
	if(name!="name"||password!="1234")
		ans=0;
	
	if(ans)
		cout<<"Welcome!/n";
	if(!ans)
		cout<<"Wrong name or password!/n";
	*/
	
	
	string name,password;
	
	cout<<"Please enter your name =>";
	cin>>name;
	
	cout<<"Please enter your password =>";
	cin>>password;
	
	bool ans=0;
	if(name=="name"&&password=="1234")
		ans=1;
	
	if(ans)
		cout<<"Welcome!/n";
	if(!ans)
		cout<<"Wrong name or password!/n";
	
	
	
	
	return 0;
}

