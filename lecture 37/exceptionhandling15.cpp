#include<iostream>
using namespace std;
int main(){
	int n, k = 10;
	cin>>n;
	try{
		if(n == 0){
			try{
				if(k == 10){
					throw 'a';
				}
			}
			catch(int x){
				throw x;
			}
			catch(char x){
				throw x;
			}
		}
		k /= n;
	}
	catch(int x){
		cout<<"divide by "<<x<<" error\n";
	}
	catch(char c){
		cout<<"char error\n";
	}catch(string s){
		cout<<"string error\n";
	}catch(...){
		cout<<"default exception\n";
	}
	cout<<"k: "<<k<<endl;
	return 0;
}