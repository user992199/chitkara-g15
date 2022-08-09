#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n = 10000;
	int k = 3;
	if(k==1){
		cout<<n<<endl;
	}
	else{
		// linear search
		// for(int i = 2; i <= n; i++){
		// 	if(pow(i, k)>n){
		// 		cout<<i-1<<endl;
		// 		break;
		// 	}
		// }
		int s = 2;
		long long e = sqrt(n);
		long long ans = s;
		while(s<=e){
			long long m = (s+e)/2;
			long long prod = pow(m, k);
			if(prod>=n){
				e = m-1;
			}else if(prod<n){
				s = m+1;
				ans = m;
			}
		}	
		cout<<ans<<endl;
	}
	return 0;
}