#include<iostream>
using namespace std;
void subseq(char in[], int i, char out[], int j){
	// base case
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// recursive case
	// without a
	subseq(in, i+1, out, j);

	// with a
	out[j] = in[i];
	subseq(in, i+1, out, j+1);
}
int main(){
	char in[] = "abcd";
	char out[100];
	subseq(in, 0, out, 0);
	return 0;
}