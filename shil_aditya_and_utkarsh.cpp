 
#include <iostream>
 
using namespace std;
 
 
 
int main() {
	int num;
	cin >> num;			
	int sum=0;
	// Reading input from STDIN
    for(int i=2;i<num;i++){
        sum+=(i*(i-1));
    }	
    cout<<sum<<endl;
	
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
 