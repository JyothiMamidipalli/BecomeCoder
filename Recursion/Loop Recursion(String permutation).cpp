#include<bits/stdc++.h>
using namespace std;
void fun(string s, int start,int end)
{
    if(start >= end)
    {
        cout<<s<<endl;
        return;
    }
    for(int i = start ; i <= end ; i++)
    {
        swap(s[i],s[start]);
        fun(s,start+1,end);
        swap(s[i],s[start]);
    }
}
int main()
{
    string s;
    cin>>s;
    fun(s,0,s.size()-1);
}
