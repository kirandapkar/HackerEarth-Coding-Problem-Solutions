#include<bits/stdc++.h>
using namespace std;
 
vector<int> Solve (int N, vector<int> a) {
   // Write your code
   vector<int> table(N);
   for(int i=0;i<N;i++){
       table[i]=-1;
   }
   for(int i=0;i<N;i++){
       if(table[i]==-1){
           int curr=i;
           int count=0;
           vector<int>v;
           v.push_back(curr);
           for(int j=i+1;j<N;j++){
               if(table[curr]!=-1){
                   count=count+table[curr];
                   break;
               }
               if(a[j]>a[curr]){
                   
                   count++;
                   curr=j;
                   v.push_back(curr);
               }
           }
           for(int k=0;k<v.size();k++){
               table[v[k]]=count;
               //cout<<table[k];
               count--;
           }
       }
   }
   return table;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
 
    vector<int> out_;
    out_ = Solve(N, H);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
    cout << "\n";
}