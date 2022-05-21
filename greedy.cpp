#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int>&a, const pair<int,int> &b){
return a.second<b.second;
}
int main()
{
   int n;
   cin>>n;
   int start[n],end[n];
   for(int i=0;i<n;i++)
   {
   	cin>>start[i];
   }
    for(int i=0;i<n;i++)
   {
   	cin>>end[i];
   }
   vector<pair<int,int>>activites;
   //{{s1,e1},{s2,e2},{s3,e3}}
   for(int i=0;i<n;i++)
   {
   	activites.push_back({start[i],end[i]});
   }
   sort(activites.begin(),activites.end());
   for(auto it:activites)
   	cout<<it.first<<" "<<it.second<<"\n";
}
