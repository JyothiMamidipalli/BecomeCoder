//Combinations(repeated elements are allowed)
#include<bits/stdc++.h>
using namespace std;
void combinations(vector<int>v,int index, vector<int>ans,int target,int size,int sum)
{
    if(index>=size and sum!=target)
    {
        return;
    }
    else if(sum == target)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else if(sum>target)
    {
        return;
    }
    ans.push_back(v[index]);
    combinations(v,index,ans,target,size,sum+v[index]);
    ans.pop_back();
    combinations(v,index+1,ans,target,size,sum);
}
int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i =0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int target;
    cin>>target;
    combinations(v,0,{},target,n,0);
    
}
