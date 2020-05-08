#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int T;
	cin>>T;
	while(T--){
		long long int R,C;
		cin>>R>>C;
		unsigned long long int sum_e,sum_o;
		if(R<=C){
			if(R%2==0){
				sum_e=((R/2)*(R/2+1));
				sum_o=pow(R/2,2);
			}
			else{
				sum_e = ((R-1)/2)*(((R-1)/2)+1);
				sum_o = pow(R/2+1,2);
			}
		}
		else {
			if(C%2==0){
				sum_e=(C/2)*(C/2+1);
				sum_o=pow(C/2,2);
			}
			else{
				sum_e = ((C-1)/2)*(((C-1)/2)+1);
				sum_o = pow(C/2+1,2);
			}
			if((R+C)%2==0){
				unsigned long long int x = ((R-C)/2);
				sum_e +=x*C;
				sum_o += x*C;
			}
			else if(R%2==0 and C%2==1){
				unsigned long long int x = (R-C)/2;
				sum_e += (x+1)*C;
				sum_o += x*C;
			}
			else{
				unsigned long long int x = (R-C)/2;
				sum_o += (x+1)*C;
				sum_e += x*C;
			}
		}
		cout<<sum_e<<" "<<sum_o<<endl;
		
	}
}