#include <iostream>
#include<math.h>
using namespace std;
 
long long int func(long long int X,long long int N,long long int count){
	if(N==0)return count;
	else if(X==1 or N<X)return count+N;
	else{
		for(long long int i=1;i<N;i++){
			if(pow(X,i)>N){
				N=N-pow(X,i-1);
				count++;
				break;
			}
			else if(pow(X,i)==N){
				N=0;
				count++;
				break;
			}
 
		}
		return  func(X,N,count);
	}
}
 
int main() {
	int T;
	cin>>T;
	while(T--){
		long long int N,X;
		cin>>N>>X;
		cout<<func(X,N,0)<<endl;
	}	
}