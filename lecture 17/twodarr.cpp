#include <iostream>
using namespace std;
void prt2d(int arr[100][100], int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout<<arr[j][i]<<" | ";
		}cout<<endl;
	}
}
int main(){
	int arr[100][100] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}};
	int i, j;
	// char arr[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
	prt2d(arr, 3, 3);
	return 0;
}