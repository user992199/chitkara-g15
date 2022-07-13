#include<iostream>
using namespace std;
int main(){
	int i = 0;
	while(i<=10){
		cout<<i<<" ";
		if(i == 6){
			// i++;
			// continue; // 0 1 2 3 4 5 6 7 8 9 10
			break;
		}
		i++;
	}
	cout<<i<<endl;
	return 0;
}