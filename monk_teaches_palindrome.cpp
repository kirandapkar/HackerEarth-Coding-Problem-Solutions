#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		int flag=0;
		for(int i=0;i<ceil(1.0*s.length()/2);i++){
			if(s[i]!=s[s.length()-i-1]){
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
 
		}
		if(flag==0){
			cout<<"YES ";
			if(s.length()%2==0)cout<<"EVEN\n";
			else cout<<"ODD\n";
		}
	}
}