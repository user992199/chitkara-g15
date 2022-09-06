#include<iostream>
using namespace std;
void towerofhanoi(int n, char source, char helper, char target){
	// base case
	if(n==0){
		return;
	}
	// recursive case
	towerofhanoi(n-1, source, target, helper);
	cout<<"Move disk "<<n<<" from "<<source<<" to "<<target<<"\n";
	towerofhanoi(n-1, helper, source, target);
}
int main(){
	int n = 3;
	towerofhanoi(n, '1', '2', '3');
	return 0;
}