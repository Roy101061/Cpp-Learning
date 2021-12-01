#include <iostream> //#include : 引入標頭檔
#include <math.h> //this project use function obtain in math.h

using namespace std;

int main(){
	// C++ api => https://cplusplus.com/
	cout<<"Please enter a number\n";
	int a;
	cin>>a;
	
	double b = sqrt(a);
	cout<<a<<"的平方根是:\n"<<b;
	
	if(sqrt(a) > 10)
		cout<<"它的值大於10\n";
	
	return 0;
}
