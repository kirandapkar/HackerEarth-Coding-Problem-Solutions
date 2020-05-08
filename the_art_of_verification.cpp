#include <iostream>
 
using namespace std;
 
void f(string f,string s,int l){
	int a = s.find(f+"=");
	cout<<f<<": ";
	for(int i=a+f.length()+1;i<l;i++){
		cout<<s[i];
		// else break;
	}
	cout<<endl;
}
 
int main() {
	string s;
	cin>>s;
	string a[5];
	a[0] = "username";
	a[1] = "pwd";
	a[2] = "profile";
	a[3] = "role";
	a[4] = "key";
	for(int i=0;i<4;i++){
		f(a[i],s,s.find(a[i+1])-1);
	}
	f(a[4],s,s.length());
}