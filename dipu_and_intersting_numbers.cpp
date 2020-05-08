 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	long int T;
	cin>>T;
	while(T--){
		long long int L,R;
		cin>>L>>R;
		cout<<(int)floor(sqrtl(R))-(int)ceil(sqrtl(L))+1<<endl;
	}
}
 