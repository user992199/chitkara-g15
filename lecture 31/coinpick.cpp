#include<iostream>
using namespace std;
int coinpick(int coins[], int n, int i, int j){
	// base case
	if(i>=j){
		return 0;
	}

	// recursive case
	int firstcoin = coins[i] + min(coinpick(coins, n, i+2, j) , coinpick(coins, n, i+1, j-1));
	int lastcoin = coins[j] + min(coinpick(coins, n, i+1, j-1) , coinpick(coins, n, i, j-2));
	return max(firstcoin, lastcoin);
}
int main(){
	int coins[] = {100, 1, 2, 3};
	int n = sizeof(coins)/sizeof(int);
	cout<<coinpick(coins, n, 0, n-1)<<endl;
	return 0;
}