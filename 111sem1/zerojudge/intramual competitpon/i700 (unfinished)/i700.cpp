#include <iostream>

using namespace std;

int sort(int dic[][5]){
	
}

int main(){
    int n,q1,q2;
    char k;
    while(cin>>n){
        int arr[n][5];
        for(int i=0; i<n; i++){
            for(int j=0; j<5; j++){
                cin>>k;
                if (k!=' '){
                    arr[i][j]=(int)k;
                }
                else{
                    break;
                }
                
            }
        }
        
        sort(arr);//not using function?
        
        
        
        
        
    }
    
    
    
}
