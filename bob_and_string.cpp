#include <iostream>
 
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--){
		string s1,s2;
		cin>>s1>>s2;
		int a[26]={0},b[26]={0};
		int x=0;
		for(int i=0;i<s1.size();i++){
			a[s1[i]-'a']++;
		}
		for(int i=0;i<s2.length();i++){
			b[s2[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			x+= abs(a[i]-b[i]);
		}
		cout<<x<<endl;
	}
}