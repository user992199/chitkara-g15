#include <iostream>
using namespace std;
int main(){
	// int arr[3][3] = {{0, 1, 2}, {4, 5, 6}, {7, 8, 9}};
	// int n = 3;
	int n;
	cin>>n;
	int arr[100][100];
	int sr = 0, sc = 0, er = n-1, ec = n-1;
	int i1 = 1, i2 = 0;
	cin>>i1>>i2;
	int i3 = i1;
	while(sr<=er and sc <= ec){
		for(int j = sc; j <= ec; j++){
			arr[sr][j] = i3;
		}
		sr++;
		for(int i = sr; i <= er; i++){
			arr[i][ec] = i3;
		}
		ec--;
		for(int j = ec; j >= sc; j--){
			arr[er][j] = i3;
		}
		er--;
		for(int i = er; i >= sr; i--){
			arr[i][sc] = i3;
		}
		sc++;
		if(i3==i1){
			i3 = i2;
		}else{
			i3 = i1;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	// cout<<endl;
	return 0;
}