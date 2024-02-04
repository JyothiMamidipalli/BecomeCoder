//Evaluating the equation using stack without brackets


#include <bits/stdc++.h>
using namespace std;

int priority(char op)
{
    if(op=='+' or op=='-')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int evaluate(int n1,int n2,char op)
{
    if(op=='*') return n1*n2;
    if(op=='+') return n1+n2;
    if(op=='-') return n1-n2;
    if(op=='/') return int(n1/n2);
}

int main() {
	string s;
	cin>>s;
	stack<int>Numbers;
	stack<int>Operator;
	for(int i=0;i<s.size();i++)
	{
	   if (s[i]==' ')
	   {
            continue;
           }
	    if(s[i]<='9' and s[i]>='0')
	    {
	        int n=0;
	        while(s[i]<='9' and s[i]>='0')
	        {
	            n=n*10+int(s[i]-'0');
	            i=i+1;
	        }
	        i=i-1;
	        Numbers.push(n);
	    }
	    else
	    {
	        if(Operator.empty())
	        {
	            Operator.push(s[i]);
	        }
	        else
	        {
	            if(priority(s[i])>priority(Operator.top()))
	            {
	                Operator.push(s[i]);
	            }
	            else
	            {
	                while(priority(s[i])<=priority(Operator.top()))
	                {
	                    int n1=Numbers.top();
	                    Numbers.pop();
	                    int n2=Numbers.top();
	                    Numbers.pop();
	                    int ans=evaluate(n2,n1,Operator.top());
	                    Operator.pop();
	                    Numbers.push(ans);
	                    if(Operator.empty())
	                    {
	                        break;
	                    }
	                }
	                Operator.push(s[i]);
	            }
	        }
	    }
	}
	while(!Operator.empty())
	{
	    int n1=Numbers.top();
	    Numbers.pop();
	    int n2=Numbers.top();
	    Numbers.pop();
	    int ans=evaluate(n2,n1,Operator.top());
	    Operator.pop();
	    Numbers.push(ans);
	}
	cout<<Numbers.top()<<endl;
	
	return 0;
}
