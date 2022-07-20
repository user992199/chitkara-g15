#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	switch(ch){
		default:
		cout<<"Invalid\n";
		// break;
		case 'A':
		case 'a':
		cout<<"First Alphabet\n";
		break;
		case 'B':
		cout<<"Second Alphabet\n";
		break;
		case 'C':
		cout<<"Third Alphabet\n";
		break;
	}
	return 0;
}