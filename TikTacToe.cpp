#include <iostream>
using namespace std;
int i,j;
char board[3][3];
char player;
void ShowBoard(char board[3][3]);
bool haveWon(char board[3][3], char player);

int main(){
	char board[3][3];
	for(i=0; i<3 ; i++){
		for(j=0; j<3 ; j++){
			board[i][j]=' ';
		}
	}
	
	char player = 'X';
	bool gameOver = false;
	
	while(!gameOver){
		ShowBoard(board);
		cout<< "Player " << player <<" enter : ";
		cin>>i;
		cin>>j;
		
		if(board[i][j]==' '){
			board[i][j]= player;   //placing the element
			gameOver = haveWon(board, player);
			if(gameOver){
				cout <<"Player " << player << " has won!!"<<endl;
			}
			else{
				player = (player=='X') ? 'O' : 'X';
			}
		}
		else{
			cout<<"Invalid Move! Try Again."<<endl;   //space already taken 
		}
	}
	ShowBoard(board);
	return 0;
}
void ShowBoard(char board[3][3]){
	for(i=0; i<3 ; i++){
		for(j=0; j<3 ; j++){
			cout<< board[i][j] <<" | ";
		}
		cout<<"\n"<<endl;
	}
}
bool haveWon(char board[3][3], char player){
	//checking for rows
	for(i=0; i<3 ; i++){
		if(board[i][0]==player && board[i][1]==player && board[i][2]==player){
			return true;
		}
	}
	//checking for columns
	for(j=0; j<3 ; j++){
		if(board[0][j]==player && board[1][j]==player && board[2][j]==player){
			return true;
		}
	}
	//for diagonals
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player){
		return true;
	}
	if(board[2][0]==player && board[1][1]==player && board[0][2]==player){
		return true;
	}
	return false;
}
