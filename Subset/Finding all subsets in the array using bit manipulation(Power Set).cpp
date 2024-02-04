//Finding all subsets in the array using bit manipulation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0 ; i < n ; i++)
    {
        int data;
        cin>>data;
        v.push_back(data);
    }
    for(int i = 0 ; i < (int)pow(2,n) ; i++)
    {   
        int index = 0;
        int l = n;
        // int x = i;
        while(l)
        {   
            l--;
            if(i & (int)(pow(2,l)))
            {
                cout<<v[index]<<" ";

            }
            index++;
        
        }
        cout<<endl;
    }
}
//Time complexity-->O(n*2^n)
