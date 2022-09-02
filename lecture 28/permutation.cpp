#include<iostream>
using namespace std;
void permutation(char arr[], int i){
	// base case
	if(arr[i] == '\0'){
		 cout<<arr<<endl;
		 return;
	}
	// recursive case
	for(int j = i; arr[j] != '\0'; j++){
		swap(arr[i], arr[j]);
		permutation(arr, i+1);
		swap(arr[i], arr[j]); // backtracking
	}
}
int main(){
	char arr[] = "abc";
	permutation(arr, 0);
	return 0;
}