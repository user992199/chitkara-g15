#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<"unsorted:\n";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;

	// bubble sort

	// for(int i = 0; i <= n-2; i++){
	// 	for(int j = 0; j <= n-2-i; j++){
	// 		if(arr[j]>arr[j+1]){
	// 			swap(arr[j], arr[j+1]);
	// 		}
	// 	}
	// }


	// modified bubble sort

	for(int i = 0; i <= n-2; i++){
		int cnt = 0;
		for(int j = 0; j <= n-2-i; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				cnt++;
			}
		}
		cout<<"iteration: "<<i<<endl;
		if(cnt == 0){
			break;
		}
	}

	cout<<"sorted:\n";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}