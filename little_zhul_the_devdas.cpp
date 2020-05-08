#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	cin>>n;
	long long int a[n];
	long long int x;
	long long int odd=0,even=0,co=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0)x=a[i];
		if(a[i]%2!=0){
			odd+=a[i];
			x=min(x,a[i]);
			co++;
		}
		else{
			even+=a[i];
		}
 
	}
	if(co==0){
		cout<<":(\n";
		return 0;
	}
	if(co%2==0){
		cout<<odd-x+even;
	}
	else{
		cout<<odd+even;
	}
}
