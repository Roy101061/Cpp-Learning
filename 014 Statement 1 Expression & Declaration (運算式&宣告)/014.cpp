#include <iostream>

using namespace std;

int main(){
	
	//單一敘述
	;  //空敘述 (;)
	//複合敘述
	{  //空敘述
	}
	//value
	8; //不做任何運算 
	//declaration (宣告) 
	int a = 1;
	int b;
	
	cout<<a<<endl;   // => 1
	cout<<(a = 3)<<endl;   // => 3
	cout<<++a<<endl;  //note: a++ => 3
	cout<<--a<<endl;  //note: a-- => 3
	
	return 0;
}
