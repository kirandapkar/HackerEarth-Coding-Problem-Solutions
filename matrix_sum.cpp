// Sample code to perform I/O:
 
#include <iostream>
 
using namespace std;
 
int main() {
	int N,M;
	cin >>N>>M;
	int a[N][M];
	for(int i=0;i<N;i++){
	    for(int j=0;j<M;j++){
	        cin>>a[i][j];
	    }
	}
	int table[N][M];
	for(int i=0;i<M;i++){
	    table[0][i]=a[0][i];
	}
	/*for(int i=0;i<N;i++){
	    for(int j=0;j<M;j++){
	        cout<<table[i][j]<<' ';
	    }
	    cout<<endl;
	}*/
	for(int i=0;i<M;i++){
	    int sum=0;
	    for(int j=0;j<N;j++){
	       sum+=a[j][i];
	       table[j][i]=sum;
	    }
	}
	
	for(int i=0;i<N;i++){
	    int sum=0;
	    for(int j=0;j<M;j++){
	       sum+=table[i][j];
	       table[i][j]=sum;
	    }
	}
	
	int Q;
	cin>>Q;
	
	for(int i=0;i<Q;i++){
	    int X,Y;
	    cin>>X>>Y;
	    cout<<table[X-1][Y-1]<<endl; 
	}
	    //cout<<sum<<endl;
	
	
	
	// Reading input from STDIN
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 
 
// Write your code here