#include<iostream>
using namespace std;
int main(){
	int n = 1000;
	int arr[1001] = {0};
	arr[2] = 1;
	for(int i = 3; i <= n; i+=2){
		arr[i] = 1;
	}
	for(int factor = 3; factor*factor <= n; factor += 2){
		if(arr[factor] == 1){
			for(int multiple = factor*factor; multiple <= n; multiple+=factor*2){
				arr[multiple] = 0;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(arr[i] == 1){
			cout<<i<<" ";
		}
	}cout<<endl;
	return 0;
}