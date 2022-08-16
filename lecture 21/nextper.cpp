#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++){
			//              0 1 2 3 4
			cin>>arr[i]; // 1 4 5 3 2
		}
		int p, q, i;
		// start from end in reverse order
		for(i = n-2; i >= 0; i--){
			// increasing order breaking
			if(arr[i]<arr[i+1]){
				// p = 1
				p = i; 
				break;
			}
		}
		// to check if the current permutation isnt the last one
		if(i == -1){
			p = 0;
			q = n-1;
		}
		else{
			// to find the next larger number than arr[p]
			for(int i = n-1; i >= 0; i--){
				if(arr[p]<arr[i]){
					// 2
					q = i;
					break;
				}
			}
			// 1 4 5 3 2 -> 1 5 4 3 2
			swap(arr[p], arr[q]);
			// p = 1->2
			p++;
			// q = 2->4
			q = n-1;
		}
		// to reverse the array from [p+1] to the end([n-1])
		while(p<q){
			swap(arr[p], arr[q]);
			p++;
			q--;
		}
		//  print the array
		for(int i = 0; i < n; i++){
			cout<<arr[i]<<" ";
		}cout<<endl;
	}
	return 0;
}