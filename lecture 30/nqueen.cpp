#include <iostream>
using namespace std;
void printboard(int board[100][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0;j < n; j++){
			cout<<board[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
}
bool issafe(int board[100][100], int n, int i, int j){
	// vertical check
	for(int k = 0; k < i; k++){
		if(board[k][j] == 1){
			return false;
		}
	}
	// diagonal check
	for(int k = i-1, l = j-1; k >= 0 && l >= 0; k--, l--){
		if(board[k][l] == 1){
			return false;
		}
	}
	for(int k = i-1, l = j+1; k >= 0 && l < n; k--, l++){
		if(board[k][l] == 1){
			return false;
		}
	}
	return true;
}
bool nqueen(int board[100][100], int n, int i){
	// base case
	if(i == n){
		printboard(board, n);
		// return true; // prints only one solution
		return false; // print all solutions
	}
	// recursive case
	for(int j = 0; j < n; j++){
		if(issafe(board, n, i, j)){
			board[i][j] = 1;
			if(nqueen(board, n, i+1)){
				return true;
			}
			board[i][j] = 0;
		}
	}
	// cout<<i<<" out of for loop\n";
	return false;
}
int main(){
	int board[100][100] = {0};
	int n = 6;
	nqueen(board, n, 0);
	return 0;
}