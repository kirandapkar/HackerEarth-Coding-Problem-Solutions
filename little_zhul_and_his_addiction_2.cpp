#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		long long int twon,k;
		cin>>twon>>k;
		long long int a[twon];
		for(long long int i=0;i<twon;i++){
			cin>>a[i];
		}
		sort(a,a+twon);
		long long int mn=1000000000,mx=0;
		for(long long int i=0;i<twon/2;i++){
			// cout<<"imnside\n";
			mn=min(mn,a[i]+a[twon-1-i]);
			mx=max(mx,a[i]+a[twon-1-i]);
		}
		long long int m=mx-mn;
		cout<<m<<endl;
		if(m>k){
			cout<<"No more girlfriends!\n";
			
		}
		else if(m==k){
			cout<<"Lucky chap!\n";
		}
		else{
			cout<<"Chick magnet Jhool!\n";
		}
	}
}
 