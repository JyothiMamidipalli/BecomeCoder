#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    int i=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='{' or s[i]=='(' or s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(s[i]==')' && !st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else if(s[i]=='}'&&!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else if(s[i]==']'&&!st.empty()&& st.top()=='[')
            {
                st.pop();
            }
            else
            {
                cout<<"Invalid";
                break;
            }
        }
    }
    if(i== s.size() && st.empty())
    {
        cout<<"Valid";
    }
}
