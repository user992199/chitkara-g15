#include<iostream>
using namespace std;
void printboard(int board[100][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0;j < n; j++){
			cout<<board[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
}
bool issafe(int board[100][100], int n, int i, int j, int number){
	// check row
	for(int row = 0; row < n; row++){
		if(board[row][j] == number){
			return false;
		}
	}
	// check col
	for(int col = 0; col < n; col++){
		if(board[i][col] == number){
			return false;
		}
	}

	// check box
	int boxi = i - i%3;
	int boxj = j - j%3;
	for(int row = 0; row < 3; row++){
		for(int col = 0; col < 3; col++){
			if(board[row+boxi][col+boxj] == number){
				return false;
			}
		}
	}
	return true;
}
bool sudokusolver(int board[100][100], int n, int i, int j, int &count){
	// base case
	if(i == n){
		printboard(board, n);
		count++;
		return false;
		return true;
	}
	// recursive case
	if(j == n){
		return sudokusolver(board, n, i+1, 0, count);
	}
	if(board[i][j] != 0){
		return sudokusolver(board, n, i, j+1, count);
	}
	for(int number = 1; number < 10; number++){
		if(issafe(board, n, i, j, number)){
			board[i][j] = number;
			if(sudokusolver(board, n, i, j+1, count)){
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}
int main(){
	int board[100][100] = {
		{5, 9, 0, 0, 3, 1, 0, 0, 0},
		{0, 0, 4, 0, 0, 2, 0, 0, 0},
		{2, 0, 0, 0, 9, 0, 0, 0, 3},
		{0, 0, 0, 0, 0, 0, 4, 0, 9},
		{4, 0, 6, 0, 0, 0, 2, 0, 7},
		{0, 0, 0, 8, 0, 0, 0, 0, 0},
		{0, 0, 9, 0, 1, 0, 6, 0, 0},
		{0, 3, 0, 0, 0, 6, 0, 9, 0},
		{0, 4, 0, 0, 0, 0, 0, 3, 0}
	};
	int n = 9;
	int count = 0;
	sudokusolver(board, n, 0, 0, count);
	cout<<count<<endl;
	return 0;
}