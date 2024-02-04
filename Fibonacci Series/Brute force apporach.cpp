//Brute force approach for fibonacci series

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    int f = 0 , s = 1;
    while (f<(20-2))
    {
       v.push_back(v[f]+v[s]);
       f++;
       s++;
    }
    for(int i = 0 ; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

------(OR)-------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) 
    {
        if(i == 1) 
        {
            cout << a << " ";
            continue;
        }
        if(i == 2) 
        {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a=b;
        b = c;
        
        cout << c << " ";
    }
    return 0;
}
