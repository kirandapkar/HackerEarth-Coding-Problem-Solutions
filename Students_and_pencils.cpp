#include<bits/stdc++.h>
using namespace std;
 
int mincost (vector<vector<int> > c, int N) {
   // Write your code here
   int sum[6];
   //int max_sum=0;
   for(int i=0;i<N-1;i++){
       sum[0]=c[i][1]+c[i+1][0];
       sum[1]=c[i][2]+c[i+1][0];
       sum[2]=c[i][0]+c[i+1][1];
       sum[3]=c[i][2]+c[i+1][1];
       sum[4]=c[i][0]+c[i+1][2];
       sum[5]=c[i][1]+c[i+1][2];
       c[i+1][0]=min(sum[0],sum[1]);
       c[i+1][1]=min(sum[2],sum[3]);
       c[i+1][2]=min(sum[4],sum[5]);
   }
   int ans = min(min(c[N-1][0],c[N-1][1]),c[N-1][2]);
   return ans;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    
    vector<vector<int> > c(N, vector<int>(3));
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> c[i][j];
        }
    }
 
    int out_;
    out_ = mincost(c, N);
    cout << out_;
}