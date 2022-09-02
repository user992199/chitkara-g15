#include<iostream>
using namespace std;
void per(char arr[], int i){
	// base case
	if(arr[i] == '\0'){
		cout<<arr<<endl;
		return;
	}
	// recursive case
	for(int j = i; arr[j] != '\0'; j++){
		swap(arr[i], arr[j]);
		per(arr, i+1);
		swap(arr[i],arr[j]);
	}
}
void permutation(char arr[], int i){
	// base case
	if(arr[i] == '\0'){
		cout<<arr<<endl;
		return;
	}
	// recursive case
	for(int j = i; arr[j] != '\0'; j++){
		swap(arr[i], arr[j]);
		per(arr, i+1);
		swap(arr[i],arr[j]);
	}
}
int main(){
	char arr[] = "abcd";
	per(arr, 0);
	permutation(arr, 0);
	return 0;
}