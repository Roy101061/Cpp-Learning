#include <iostream> //#include : �ޤJ���Y�� 
#include <math.h> //this project use function obtain in math.h

using namespace std;

int main(){
	// C++ api => https://cplusplus.com/
	cout<<"Please enter a number\n";
	int a;
	cin>>a;
	
	double b = sqrt(a);
	cout<<a<<"������ڬO:\n"<<b;
	
	if(sqrt(a) > 10)
		cout<<"�����Ȥj��10\n";
	
	return 0;
}

