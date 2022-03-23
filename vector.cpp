#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>ve;
ve.push_back(10);
ve.push_back(20);
ve.push_back(30);
ve.push_back(40);
ve.push_back(50);
ve.push_back(60);
ve.erase(ve.begin(),ve.begin()+3);
for(vector<int>::iterator it=ve.begin();it!=ve.end();it++)
{
cout<<*it<<" ";
}
cout<<endl;
ve.insert(ve.begin(),300);
for(vector<int>::iterator it=ve.begin();it!=ve.end();it++)
{
cout<<*it<<" ";
}
cout<<endl;
ve.insert(ve.begin()+1,2,2);
for(vector<int>::iterator it=ve.begin();it!=ve.end();it++)
{
cout<<*it<<" ";
}
cout<<endl;
ve.insert(ve.end()-1,2,2);
for(vector<int>::iterator it=ve.begin();it!=ve.end();it++)
{
cout<<*it<<" ";
}

}