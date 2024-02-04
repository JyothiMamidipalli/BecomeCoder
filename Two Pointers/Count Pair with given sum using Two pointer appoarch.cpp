//Count Number of pairs equal to sum in the given array of elements
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //jyo_code();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    int cnt=0;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(k==sum) cnt++;
        if(sum<=k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<cnt<<endl;
    return 0;
    //Time Complexity-O(n(log(n)))
    //Space Complexity-O(1)
}
