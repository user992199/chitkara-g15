#include <iostream>
using namespace std;
int main(){

	char ch;
	int cnt = 0;
	cin>>ch;
	while(ch!='$'){ 
		cnt++;
		cin.get(ch); // h e l l o \n w o r l d 
	}
	cout<<cnt<<endl;
	return 0;
}