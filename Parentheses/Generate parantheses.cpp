#include<bits/stdc++.h>
using namespace std;
void generateParentheses(int close , int open,string s , int n)
{
    if(close+open >= n*2)
    {
        cout<<s<<endl;
        return;
    }
    if(close > open)
    {
        return;
    }
    if(open == n)
    {
        generateParentheses(close+1,open,s+')',n);
    }
    else
    {
        generateParentheses(close,open+1,s+'(',n);
        generateParentheses(close+1,open,s+')',n);
    }
}
int main()
{
    int n;
    cin>>n;
    string s;
    generateParentheses(0,1,"(",n);
}
