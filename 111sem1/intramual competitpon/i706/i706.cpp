#include <iostream>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);  // 關閉cin & stdin同步, 減少程式負擔 https://blog.csdn.net/kernelxiao/article/details/108600862
	std::cin.tie(0);
	
    int n;
    while(cin>>n){
        int high[n-1];
        int his[n-1]={0};
        for(int i=0; i<n; i++){
            cin>>high[i];
        }
        cout<<"0";
        for(int i=1; i<n; i++){
            int chk=0;
            for(int j=i-1; j>=0; j--){
                if(high[i]<high[j]){
                    j=his[j];
                }
                else if(high[i]>high[j]){
                    chk=1;
                    cout<<' '<<j+1;
                    his[i]=j+1;
                    break;
                }
                else{
                    chk=1;
                    cout<<' '<<his[j];
                    his[i]=his[j];
                    break;
                }
            }
            if(chk==0){
                cout<<" 0";
            }
        }
    }

    return 0;
}

