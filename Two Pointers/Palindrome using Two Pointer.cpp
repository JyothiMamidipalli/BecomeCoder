/*Checking whether a string is Palindrome or not using Two Pointer with Half Time */
#include<bits/stdc++.h>
using namespace std;
bool twopointer(string s,int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
        return true;
    }
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    if(twopointer(s,n)) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
    
}
