#include <iostream>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		long long int N,K;
		cin>>N>>K;
		long long int a[N];
		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		long long int c_max=0,t_max=0;
		for(int i=0;i<N;i++){
			if(a[i]<=K)c_max+=a[i];
			else c_max=0;
			if(c_max>t_max)t_max=c_max;
		} 
		cout<<t_max<<endl;
	}
}