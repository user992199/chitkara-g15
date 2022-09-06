#include<iostream>
using namespace std;
void printmaze(char arr[][5], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
}
bool ratinamaze(char arr[][5], int n, int m, int i, int j){
	arr[i][j] = '1'; // set visited
	// base case
	if(i == n-1 && j == m-1){
		printmaze(arr, n, m);
		return false; // will print all solutions
		return true; // will print only one solution
	}

	// recursive case
	if(j+1 < m && arr[i][j+1] != 'X'){
		if(ratinamaze(arr, n, m, i, j+1)){
			return true;
		}
	}
	if(i+1 < n && arr[i+1][j] != 'X'){
		if(ratinamaze(arr, n, m, i+1, j)){
			return true;
		}
	}
	arr[i][j] = '0'; // set non visited
	return false;
}
int main(){
	char arr[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int n = 4;
	int m = 4;
	ratinamaze(arr, n, m, 0, 0);
	// printmaze(arr, n, m);
	return 0;
}