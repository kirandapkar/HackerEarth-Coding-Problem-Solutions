 
#include <iostream>
 
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x=a%2,y=b%2;
		if(b==0)cout<<a<<endl;
		else if(x==0 and y==0)cout<<0<<endl;
			else if(x==0 and y!=0)cout<<1<<endl;
			else if(x!=0 and y==0)cout<<1<<endl;
			else{
				cout<<0<<endl;
			}
		
	}
}
 