//To find the GCD (Greatest Common Divisor) of two numbers.

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0 or a==0) return 0;
	int c = min(a,b);
	int d = max(a,b);
	return (c,c%d);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
