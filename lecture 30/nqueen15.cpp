#include<iostream>
using namespace std;
void printboard(int board[100][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0;j < n; j++){
			cout<<board[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
}
bool issafe(int board[100][100], int n, int row, int col){
	// check column
	for(int i = 0; i < row; i++){
		if(board[i][col] == 1){
			return false;
		}
	}

	// check left diagonal
	for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--){
		if(board[i][j] == 1){
			return false;
		}
	}

	// check right diagonal
	for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++){
		if(board[i][j] == 1){
			return false;
		}
	}
	return true;
}
bool nqueen(int board[100][100], int n, int row, int &count){
	// base case
	if(row == n){
		printboard(board, n);
		count++;
		return false; // prints all solutions
		return true; // prints only one solution
	}
	// recursive case
	for(int col = 0; col < n; col++){
		if(issafe(board, n, row, col)){
			board[row][col] = 1;
			if(nqueen(board, n, row+1, count)){
				return true;
			}
			board[row][col] = 0;
		}
	}
	return false;
}
int main(){
	int board[100][100] = {0};
	int n = 8;
	int count = 0;
	nqueen(board, n, 0, count);
	cout<<count<<endl;
	return 0;
}