//two pointer approach 
//o(n)-->tc-->if the array is sorted 
//unsorted array-->o(n*logn)
#include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int cnt=0;
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==k) {
            cnt++;
            i++;
        }
        else if(arr[i]+arr[j]<k) i++;
        else j--;
    }
    cout<<cnt;
	return 0;
}
