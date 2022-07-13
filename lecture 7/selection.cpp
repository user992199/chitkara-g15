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

	// selection sort

	for(int i = 0; i <= n-2; i++){
		int min = i;
		for(int j = i+1; j <= n-1; j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}


	cout<<"sorted:\n";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}