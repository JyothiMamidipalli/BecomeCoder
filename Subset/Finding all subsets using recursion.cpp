//Finding all subsets using recursion

#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>v,int index,vector<int>ans,int size)
{
    if(index>=size)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    //pick
    ans.push_back(v[index]);
    subset(v,index+1,ans,size);
    //unpick
    ans.pop_back();
    subset(v,index+1,ans,size);
}
int main()
{
    int n;
    cin>>n;
    int data;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        v.push_back(data);
    }
    subset(v,0,{},v.size());
}
//Time complexity-O(2^n)
