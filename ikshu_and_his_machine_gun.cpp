 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int S;
	cin>>S;
	int a[S];
	int c=0;
	for(int i=0;i<S;i++){
		cin>>a[i];
	}
	sort(a,a+S);
	// int m = *min_element(a,a+S);
	for(int i=0;i<S;i++){
		cout<<a[i]-i<<" ";
	}
}
