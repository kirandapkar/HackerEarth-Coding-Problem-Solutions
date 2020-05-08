 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		long long int N,K;
		cin>>N>>K;
		long long int x=K%N,y=K/N;
		int ans1=(long long int)(ceil(log2(N)))+1;
		int ans2=0;
		if(x!=0)ans2=(long long int)(ceil(log2(x)))+1;
		cout<<ans1*y+ans2<<endl;
		
	}
}
 
