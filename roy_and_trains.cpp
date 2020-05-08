#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		long long int t0,t1,t2,v1,v2,d;
		cin>>t0>>t1>>t2>>v1>>v2>>d;
		// cout<<t0+t1+(60.0*d/v1)<<" "<<t0+t2+(60.0*d/v2)<<endl;
		long long int ans=ceil(min(t1+(60.0*d/v1),t2+(60.0*d/v2)));
		if(t0<=t1 and t0<=t2)cout<<ans<<endl;
		else if(t0<=t1 and t0>t2)cout<<ceil(t1+(60.0*d/v1))<<endl;
		else if(t0>t1 and t0<=t2)cout<<ceil(t2+(60.0*d/v2))<<endl;
		else cout<<-1<<endl; 
	}
}