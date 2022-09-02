#include<iostream>
using namespace std;
void printsubseq(char in[], int i, char out[], int j){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	// recursive case
	// without a
	printsubseq(in, i+1, out, j);

	// with a / with current character
	out[j] = in[i];
	printsubseq(in, i+1, out, j+1);
}
int main(){
	char arr[] = "abcd";
	char out[100];
	printsubseq(arr, 0, out, 0);
	return 0;
}