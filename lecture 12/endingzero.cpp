#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int first0 = 0;
	for(int i = 0; i < n; i++){
		if(arr[i]!=0){
			swap(arr[i], arr[first0]);
			first0++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}