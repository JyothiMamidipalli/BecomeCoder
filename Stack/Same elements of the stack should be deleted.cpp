//Same element should be deleted and return the size of the stack.
//[14,13,13,14,12,11,11,12]-->In this case the stack is empty

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int>jyo;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        jyo.push_back(x);
    }
    stack<int>raj;
    raj.push(jyo[0]);
    for (int i=1;i<n;i++){
        if (raj.empty()){
            raj.push(jyo[i]);
        }
        else if (jyo[i]==raj.top())
        {
            raj.pop();
        }
        else
        {
            raj.push(jyo[i]);
        }
    }
    cout << raj.size();
    return 0;
}
