#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main() {
    //Fibonacci number Generation using Recursion
    //Recursive Tree will be generated...!
    int n;
    cin>>n;
    cout << Fibonacci(n);
    return 0;
}
