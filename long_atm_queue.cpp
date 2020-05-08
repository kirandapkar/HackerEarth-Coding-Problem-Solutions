 
#include <iostream>
 
using namespace std;
 
int main() {
	long long int N;
	cin>>N;
	long long int a[N],c=1;
	cin>>a[0];
	for(long long int i=1;i<N;i++){
		cin>>a[i];
		if(a[i]<a[i-1])c++;
	}
	cout<<c;
 
}
 