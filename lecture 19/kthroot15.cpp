#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n, k;
		cin>>n>>k;
		long long int s = 2, e = sqrt(n);
		long long int ans = 0;
		if(k == 1){
			cout<<n<<endl;
		}else{
			while(s<=e){
				long long int m = (s+e)/2;
				if(pow(m, k)>n){
					e = m-1;
				}else if(pow(m, k)<=n){
					ans = m;
					s = m+1;
				}
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}