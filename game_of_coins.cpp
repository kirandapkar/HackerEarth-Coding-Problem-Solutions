#include <iostream>
 
using namespace std;
 
void func(int N,int a,int b){
	if(N==1 or N==2)cout<<a<<" ";
	else{
		func(N-1,b,a);
		func(N-2,b,a);
	}
}
 
int main() {
	int T;;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		// func(N,1,0);
		// if(N>=5 and N%2!=0)cout<<"Bob"<<endl;
		// else 
		cout<<"Alice"<<endl;
	}
}