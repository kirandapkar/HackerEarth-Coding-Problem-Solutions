 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int T,N,K,M;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>K>>M;
        vector<string>arr;
        for(int j=0;j<N;j++){
            string s;
            cin>>s;
            arr.push_back(s);
      // cout<<arr[j];
        }
        //for(int j=0;j<N;j++){
            sort(arr.begin(),arr.end());
            
        //}
        //for(int j=0;j<N;j++){
            // string s;
            // cin>>s;
            // arr.push_back(s);
             cout<<arr[K-1]<<endl;
        //}
        
    }
    
    
}