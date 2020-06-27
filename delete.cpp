#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    int x,y,v;
    cin>>x>>y>>v;
    float d=sqrt(x*x+y*y);
    float t=d/v;
    a[i]=t;
  }
  int count=0;
  
  unordered_map<int,int>m; 
    for(int i=0;i<n;i++) 
        m[a[i]]++; 
    for(auto x:m) 
        cout<<" "<<x.second;
  //cout<<count;
}

