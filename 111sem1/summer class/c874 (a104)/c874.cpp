#include <iostream>

using namespace std;

int temp1[10000]={0}, temp2[10000]={0};
//temp1 -> pow , temp2 -> sum

void sum(){
    for(int i=0; i<10000; i++){
        temp2[i]+=temp1[i];
    }
    for(int i=0; i<9999; i++){
        while(temp2[i]>9){
            temp2[i]-=10;
            temp2[i+1]+=1;
        }
    }
}

void times(){
    for(int i=0; i<10000; i++){
        temp1[i]*=4;
    }
    for(int i=0; i<9999; i++){
        while(temp1[i]>9){
            temp1[i]-=10;
            temp1[i+1]+=1;
        }
    }
}

int main()
{
    
    int a;
    cin>>a;
    
    for(int n=0; n<a; n++){
        for(int i=0; i<10000; i++){
            temp1[i]=0;
        }
        temp1[0]=1;
        
        for(int i=0; i<n; i++){
            times(); //number = number*4;
        }
        sum(); //total+=number;
    }
    
    int n=9999;
    for(n ; n>=0; n--){
        if(temp2[n]!=0){
            break;
        }
    }
    for(n; n>=0; n--){
        cout<<temp2[n];
    }
    
    return 0;
}
