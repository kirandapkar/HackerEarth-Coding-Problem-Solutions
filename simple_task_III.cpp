
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int num;
	cin >> num;										// Reading input from STDIN
    for(int i=0;i<num;i++){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        //cout<<a[1]<<a[2]<<endl;
        if(a[1]!=a[2])cout<<2*a[1]+1<<endl;
        else{
            cout<<2*a[2]<<endl;
        }
    }
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
 