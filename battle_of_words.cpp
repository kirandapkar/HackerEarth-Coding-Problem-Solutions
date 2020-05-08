#include <iostream>
#include<string>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	string s;
	getline(cin,s);
	while(t--){
		string s1,s2;
		// cin>>s1>>s2;
		getline(cin,s1);
		// getline(cin,s);
		// cout<<s1<<endl;
		getline(cin,s2);
		// cout<<s2<<endl;
		int a[26]={0},b[26]={0};
		for(int i=0;i<s1.length();i++){
			if(s1[i] != ' '){
				a[s1[i]-'a']++;
			}
		}
		for(int i=0;i<s2.length();i++){
			if(s2[i] != ' '){
				b[s2[i]-'a']++;
			}
		}
		// for(int i=0;i<26;i++){
		// 	cout<<a[i]<<" "<<b[i]<<endl;
		// }
		int flag1=0,flag2=0;
		for(int i=0;i<26;i++){
			if(a[i]>b[i])flag1=1;
			else if(a[i]<b[i])flag2=1;
		}
		if(flag1==1 and flag2==0)cout<<"You win some.\n";
		else if(flag1==0 and flag2==1)cout<<"You lose some.\n";
		else if(flag1==0 and flag2==0)cout<<"You draw some.\n";
		else cout<<"You draw some.\n";
	}
}