#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    vector<bool>jyo(n+1,true);
    jyo[0]=false;
    jyo[1]=false;
    for(int i=2;i<=int(sqrt(n));i++)
    {
        for(int j=i*i;j<=n;j+=i)
        {
            jyo[j]=false;
        }
    }
    for (int i = 1; i <= n; i++)
    {
		if (jyo[i])
			cout << i << " ";
    }
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}

//T.C-->O(n*log(log(n)))
//It takes more no.of iterations
