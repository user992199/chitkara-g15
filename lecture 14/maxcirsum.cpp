#include<iostream>
#include<climits>
using namespace std;

void negatearr(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] *= -1;
	}
}

int main(){
	int arr[] = {-8, -9, -29, 4, 2, -8};
	int n = sizeof(arr)/sizeof(n);

	int res1 = 0, cs = 0, ms = INT_MIN, ts = 0;

	for(int i = 0; i < n; i++){
		cs += arr[i];
		ts += arr[i];
		if(cs > ms){
			ms = cs;
		}
		if(cs < 0){
			cs = 0;
		}
	}
	res1 = ms;
	ms = INT_MIN;
	cs = 0;
	negatearr(arr, n);

	for(int i = 0; i < n; i++){
		cs += arr[i];
		// ts += arr[i];
		if(cs > ms){
			ms = cs;
		}
		if(cs < 0){
			cs = 0;
		}
	}

	int res2 = ts + ms;
	cout<<max(res1, res2)<<endl;

}