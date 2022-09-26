#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
	map<int, int> m;
	m.insert(pair<int, int>(1, 2));
	cout<<m[1]<<endl;
	m.erase(1);
	cout<<m.size()<<endl;
	cout<<m[1]<<endl;
	m.insert(pair<int, int>(1, 2));
	cout<<m.size()<<endl;
	m[1] = 2;
	m[2] = 190;
	m[8] = 4;
	m[4] = 5;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<m.find(2)->second<<endl;
	cout<<m[1]<<endl;

	unordered_map<int, int> m2;
	m2[1] = 10;
	m2[2] = 0;
	for(auto i:m2){
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}