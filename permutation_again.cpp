 
#include <iostream>
 
using namespace std;
long int ans(int x){
	if(x<=1)return 0;
	else return 2*x+ans(x-2);
}
int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int x;
		cin>>x;
		if(x==1 or x==2)cout<<1<<endl;
		else if(x%2==0) cout<<x-1+ans(x-2)<<endl;
		else cout<<x+ans(x-2)<<endl;
	}
			// Writing output to STDOUT
}
 