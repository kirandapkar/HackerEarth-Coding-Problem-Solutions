#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int odd=0,even=0;
		for(long long int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0)even+=i;
				else odd+=i;
 
				if((n/i) != i){
					if((n/i)%2==0)even+=n/i;
					else odd+=n/i;
				}
			}
			
 
		}
		if(n%2==1)cout<<8*(odd+even)<<endl;
			else cout<<24*odd<<endl;
	}
}