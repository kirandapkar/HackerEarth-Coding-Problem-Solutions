#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int a[N];
		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		sort(a,a+N);
		for(int i=N-1;i>=0;i--){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
 