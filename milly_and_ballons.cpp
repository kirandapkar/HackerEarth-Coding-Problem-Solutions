#include <iostream>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		int N,M,A,B;
		cin>>N>>M>>A>>B;
		int x,y;
		int a[M+1]={0};
		for(int i=0;i<N;i++){
			cin>>x>>y;
			for(int i=x;i<=y;i++){
				a[i]=1;
			}
		}
		int c=0,t=1;
		for(int i=A;i<=B;i++){
			if(a[i]==0)c++;
		}
		cout<<c<<endl;
	}
}