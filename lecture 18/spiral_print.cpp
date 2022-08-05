#include <iostream>
using namespace std;
int main(){
	int arr[3][3] = {{0, 1, 2}, {4, 5, 6}, {7, 8, 9}};
	int n = 3;
	int sr = 0, sc = 0, er = n-1, ec = n-1;
	// loop for printing the whole 2d array
	while(sr<=er and sc <= ec){
		// loop for printing the first row
		for(int j = sc; j <= ec; j++){
			cout<<arr[sr][j]<<' ';
		}
		sr++;
		// loop for printing the last column
		for(int i = sr; i <= er; i++){
			cout<<arr[i][ec]<<' ';
		}
		ec--;
		// loop for printing the last row
		for(int j = ec; j >= sc; j--){
			cout<<arr[er][j]<<' ';
		}
		er--;
		// loop for printing the first column
		for(int i = er; i >= sr; i--){
			cout<<arr[i][sc]<<' ';
		}
		sc++;
	}
	cout<<endl;
	return 0;
}