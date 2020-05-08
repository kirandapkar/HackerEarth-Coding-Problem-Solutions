#include <iostream>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		long long int N;
		cin>>N;
		long long int a[N];
		long long int x=1000000000;
		int c=0;
		for(int i=0;i<N;i++){
			cin>>a[i];
			if(x>=a[i]){
				c++;
				x=min(x,a[i]);
			}
		}
		cout<<c<<endl;
	}
}
 