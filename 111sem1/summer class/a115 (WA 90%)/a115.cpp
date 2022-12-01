#include <iostream>

using namespace std;

int main(){
	int board[5][5];
	int temp;
	bool chk=false, fa=false; //check, final_ans
	int oln[5]={99,99,99,99,99}; //one_line_num
	int dln[5]={99,99,99,99,99}; //double_line_num
	int tln=99, tlnt=99; //triple_line_num 1&2
	int olc=0, dlc=0, lc=0, pos=0; //one_line_counter, double_line_counter, line_chk, position
	
	for(int n=0; n<5; n++){       //enter the board
		for(int i=0; i<5; i++){
			cin>>board[n][i];
		}
	}
	
	while(cin>>temp && temp!=-1){    //chk num
		chk=false;
		for(int n=0; n<5; n++){
			if(chk==true)
				break;
			for(int i=0; i<5; i++){
				if(board[n][i]==temp){
					board[n][i]=0;
					chk=true;
					break;
				}
			}
		}
	}
	
	for(int n=0; n<5; n++){    //row
		lc=0;
		for(int i=0; i<5; i++){
			if(board[n][i]!=0){
				lc++;
				pos=i;
			}
			if(lc==2)
				break;
		}
		if(lc==1){
			oln[olc]=board[n][pos];
			olc++;
		}
	}
	
	for(int n=0; n<5; n++){    //column
		lc=0;
		for(int i=0; i<5; i++){
			if(board[i][n]!=0){
				lc++;
				pos=i;
			}
			if(lc==2)
				break;
		}
		if(lc==1){
			chk=false;
			for(int j=0; j<olc; j++){
				if(board[pos][n]==oln[j]){
					dln[dlc]=board[pos][n];
					dlc++;
					chk=true;
					break;
				}
			}
			if(chk==false){
				oln[olc]=board[pos][n];
				olc++;
			}
		}
	}
	
	lc=0;
	for(int n=0; n<5; n++){  //tl to br
		if(board[n][n]!=0){
			lc++;
			pos=n;
		}
		if(lc==2){
			break;
			}
	}
	if(lc==1){
		chk=false;
		for(int j=0; j<dlc; j++){
			if(board[pos][pos]==dln[j]){
				tln=dln[j];
				chk=true;
				break;
			}
		}
		if(chk==false){
			for(int j=0; j<olc; j++){
				if(board[pos][pos]==oln[j]){
					dln[dlc]=board[pos][pos];
					dlc++;
					chk=true;
					break;
				}
			}
		}
		if(chk==false){
			oln[olc]=board[pos][pos];
			olc++;
		}
	}
	
	lc=0;
	if(fa==false){
		for(int n=0; n<5; n++){  //tr to bl
		if(board[4-n][n]!=0){
			lc++;
			pos=n;
		}
		if(lc==2)
			break;
	}
		if(lc==1){
			chk=false;
			if(tln!=99){
				if(tln==board[4-pos][pos]){
					cout<<tln;
					fa=true;
					chk=true;
				}
				else{
					tlnt=board[4-pos][pos];
					chk=true;
				}
			}
			if(chk==false){
				for(int j=0; j<dlc; j++){
					if(board[4-pos][pos]==dln[j]){
						cout<<dln[j];
						fa=true;
						chk=true;
						break;
					}
				}
			}
			if(chk==false){
				for(int j=0; j<olc; j++){
					if(board[4-pos][pos]==oln[j]){
						dln[dlc]=board[4-pos][pos];
						dlc++;
						chk=true;
						break;
					}
				}
			}
			if(chk==false){
				oln[olc]=board[pos][pos];
				olc++;
			}
		}
	}
	
	if(fa==false){
		if(tln!=99){
			if(tlnt<tln && tlnt!=99){
				tln=tlnt;
			}
			cout<<tln;
		}
		else if(dlc!=0){
			int ans=999;
			for(int n=0; n<5; n++){
				if(ans>dln[n] && dln[n]!=0){
					ans=dln[n];
				}
			}
			cout<<ans;
		}
		else if(olc!=0){
			int ans=999;
			for(int n=0; n<5; n++){
				if(ans>oln[n] && dln[n]!=0){
					ans=oln[n];
				}
			}
			cout<<ans;
		}
		else{
			int ans=999;
			for(int n=0; n<5; n++){
				for(int j=0; j<5; j++){
					if(board[n][j]!=(-1) && board[n][j]!=0 && board[n][j]<ans){
						ans=board[n][j];
					}
				}
			}
			cout<<ans;
		}
	}
	
}
