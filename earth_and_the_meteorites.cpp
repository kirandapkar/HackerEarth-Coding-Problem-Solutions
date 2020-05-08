#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
 
int main()
{
// freopen("abc.txt","w",stdout);
 int t;
  cin>>t;
  while(t--)
   {
   // vector<int> v1,v2;
          set<lli> v1,v2;
     int n,m,q;
     cin>>n>>m>>q;
     v1.insert(1);
     v1.insert(n);
     v2.insert(1);
     v2.insert(m);
     //cout<<"ok"<<endl;
     for(int i=0;i<q;i++)
      {
        lli  a,b;
         cin>>a>>b;
         v1.insert(a);v2.insert(b);
   }
  // cout<<"done"<<endl;
   
   lli ans1=(v1.size()-1)*(v2.size()-1);
   //cout<<ans1<<endl;
  lli  minr=INT_MAX,maxr=0,minc=INT_MAX,maxc=0;
    set<lli> :: iterator it;
    it=v1.begin();
    lli  prev=*it;
    it++;
    for(;it!=v1.end();it++)
     {
      minr=min(minr,*it-prev);
      maxr=max(maxr,*it-prev);
      prev=*it;
     }
     
     
     it=v2.begin();
  prev=*it;
    it++;
    for(;it!=v2.end();it++)
     {
      minc=min(minc,*it-prev);
      maxc=max(maxc,*it-prev);
      prev=*it;
     }
  //   cout<<"minr "<<minr<<" minc "<<minc<<" maxr "<<maxr<<" maxc "<<maxc<<endl;
   lli ans2=minc*minr;
   lli ans3=maxr*maxc;
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
     
   }
 
}