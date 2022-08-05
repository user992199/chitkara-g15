#include <iostream>
using namespace std;

void printmat(int arr[100][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<arr[i][j]<<' ';
		}cout<<'\n';
	}
}

int main(){
	int arr[100][100] = {{0, 1, 2}, {4, 5, 6}, {7, 8, 9}};
	int n = 8;
	cin>>n;
	int sr = 0, sc = 0, er = n-1, ec = n-1;
	int i1 = 1, i2 = 0;
	cin>>i1>>i2;
	int i3 = i1;
	printmat(arr, n);
	// loop for printing the whole 2d array
	while(sr<=er and sc <= ec){
		// loop for printing the first row
		for(int j = sc; j <= ec; j++){
			arr[sr][j] = i3;
		}
		sr++;
		// loop for printing the last column
		for(int i = sr; i <= er; i++){
			arr[i][ec] = i3;
		}
		ec--;
		// loop for printing the last row
		for(int j = ec; j >= sc; j--){
			arr[er][j] = i3;
		}
		er--;
		// loop for printing the first column
		for(int i = er; i >= sr; i--){
			arr[i][sc] = i3;
		}
		sc++;
		if(i3 == i1){
			i3 = i2;
		}else{
			i3 = i1;
		}
	}
	cout<<"________________\n";
	printmat(arr, n);
	return 0;
}