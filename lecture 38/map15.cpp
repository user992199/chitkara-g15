#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
	map<int, int> m;
	unordered_map<int, int> m1;
	m[1] = 1;
	m.insert(pair<int, int>(1, 2));
	m[1] = 10;
	cout<<m[1]<<endl;
	m.erase(1);
	cout<<m.size()<<endl;
	cout<<m[1]<<endl;
	cout<<m.size()<<endl;
	m[0] = 0;
	m[1] = 1;
	m[2] = 2;
	m[3] = 3;
	m[4] = 4;
	for(auto i: m){
		cout<<i.first<<": "<<i.second<<endl;
	}
	cout<<m.find(1)->second<<endl;
	cout<<m.find(7)->second<<endl;
	cout<<m.begin()->second<<endl;
	cout<<m.end()->second<<endl;
	cout<<m.size()<<endl;


	m1[0] = 0;
	m1[1] = 1;
	m1[3] = 3;
	m1[2] = 2;
	m1[4] = 4;
	for(auto i: m1){
		cout<<i.first<<": "<<i.second<<endl;
	}

	return 0;
}