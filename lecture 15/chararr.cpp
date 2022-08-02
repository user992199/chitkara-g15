#include<iostream>
using namespace std;
int main(){
	// char arr1[6] = {'a', 'b', 'c'};
	// char arr2[5] = {'d', 'e', 'f'};
	// char arr3[5] = {'g', 'h', 'i'};
	// char arr4[7] = {'j', 'k', 'l'};
	// cout<<arr1[4]<<endl;
	// cout<<arr1<<endl;
	// cout<<arr2<<endl;
	// cout<<arr3<<endl;
	// cout<<arr4<<endl;
	// char arr2[6];
	// char arr[6];
	// cin>>arr;
	// cout<<arr<<endl;
	// cin>>arr2;
	// cout<<arr<<endl;
	// cout<<arr2<<endl;
	// char arr[7] = "afdjbn";
	// cout<<arr<<endl;
	char arr[100], arr2[100];
	int i = 0;
	// arr[i] = cin.get();
	// while(arr[i]!='\n' && i < 100){
	// 	i++;
	// 	arr[i] = cin.get();
	// }
	cin.getline(arr, 100, '$');
	cin>>arr2;
	cout<<arr<<endl;
	cout<<arr2<<endl;
	return 0;
}