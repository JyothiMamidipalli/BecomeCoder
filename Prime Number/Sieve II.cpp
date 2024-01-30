#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<bool>jyo(n+1,true);
    jyo[0]=false;
    jyo[1]=false;
    for(int i=2;i<=int(sqrt(n));i++)
    {
        if(jyo[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                jyo[j]=false;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
		if (jyo[i])
			cout << i << " ";
    }
}

//T.C-->O(n*log(log(n)))
//No.of iterations will be less in this case
