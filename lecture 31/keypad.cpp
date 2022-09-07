#include<iostream>
using namespace std;
void keypadsolver(char in[], char out[], int i, int j){
	char keypad[][5] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// recursive case
	int digit = in[i] - '0';
	for(int k = 0; keypad[digit][k] != '\0'; k++){
		out[j] = keypad[digit][k];
		keypadsolver(in, out, i+1, j+1);
	}
}
int main(){
	char in[] = "234";
	char out[100];
	keypadsolver(in, out, 0, 0);
}