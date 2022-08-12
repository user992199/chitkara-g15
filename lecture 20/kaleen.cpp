#include <iostream>
#include<cstring>
using namespace std;

void rr(string &s, long long k)
{
    for(long long j = 0; j < k; j++){
        string temp = s.substr(s.length()-1);
        for(long long i = s.length()-1; i >= 0; i--){
            s[i+1] = s[i];
        }
        s[0] = temp[0];
    }
}
string rr1(string str1, long long i, long long j, long long k)
{  
    string str2 = str1.substr(i-1, j-i+1);
    string str3 = str1.substr(0, i-1);
rr(str2, k);
    str3 = str3.append(str2);
    str3.append(str1.substr(j));
    return str3;
}

int main()
{
string str1;
cin>>str1;
long long q;
cin>>q;
for(long long t = 0; t < q; t++){
   long long i, j, k;
   cin>>i>>j>>k;
   str1 = rr1(str1, i, j, k);
}
cout<<str1<<endl;
return 0;
}