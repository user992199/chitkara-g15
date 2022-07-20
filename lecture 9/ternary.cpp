#include<iostream>
using namespace std;
int main(){
	int i = 10;
	i > 11 ? cout<<"greater than 11" : i > 5 ? cout<<"greater than 5 but smaller than 11" : cout<< "smaller than 5";
	return 0;
}