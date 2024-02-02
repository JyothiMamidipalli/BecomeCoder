//To calculate the summation of the digits in the given number if example n=345

#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
	if(n==0) return 0;
	int rem = n%10;
	return rem+sumOfDigits(n/10);
}
int main()
{
	int n;
	cin>>n;
	cout<<sumOfDigits(n);
}
