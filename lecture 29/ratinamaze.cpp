#include<iostream>
using namespace std;
void printarr(char arr[][5], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
}
bool ratinamaze(char arr[][5], int n, int m, int i, int j){
	// base case
	if(i == n-1 && j == m-1){
		arr[i][j] = '1';
		printarr(arr, n, m);
		return true; // prints only one solution
		return false; // prints every solution
	}

	// recursive case
	arr[i][j] = '1';
	if(j+1 < m && arr[i][j+1] != 'X'){
		if(ratinamaze(arr, n, m, i, j+1))
			return true;
	}
	if(i+1 < n && arr[i+1][j] != 'X'){
		if(ratinamaze(arr, n, m, i+1, j))
			return true;
	}
	// if(j+1 < m && arr[i][j+1] != 'X'){
	// 	return ratinamaze(arr, n, m, i, j+1);
	// 		// return true;
	// }
	// if(i+1 < n && arr[i+1][j] != 'X'){
	// 	return ratinamaze(arr, n, m, i+1, j);
	// 		// return true;
	// }
	arr[i][j] = '0';
	return false;

}
int main(){
	char a[][5] = {
		"0000", 
		"00XX",
		"0000",
		"XX00"
	};
	int n = 4;
	int m = 4;
	ratinamaze(a, n, m, 0, 0);
	// printarr(a, n, m);
	return 0;
}