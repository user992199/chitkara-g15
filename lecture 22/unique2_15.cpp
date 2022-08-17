#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 1, 2, 4, 3, 2, 7, 4};
	int n = sizeof(arr)/sizeof(int);
	// int arr[10000];
	// int n;
	// cin>>n;
	// for(int i = 0; i < n; i++){
	// 	cin>>arr[i];
	// }
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans^=arr[i];
	}
	int temp = ans, bitpos = 0;
	while(temp>0){
		if((temp&1) == 1){
			break;
		}else{
			bitpos++;
			temp>>=1;
		}
	}
	int mask = 1<<bitpos;
	mask = (ans&(-ans));
	int num1 = 0, num2 = 0;
	for(int i = 0; i < n; i++){
		if((arr[i]&mask)==0){
			num1^=arr[i];
		}else{
			num2^=arr[i];
		}
	}
	cout<<min(num1, num2)<<" "<<max(num1, num2)<<endl;
	return 0;
}