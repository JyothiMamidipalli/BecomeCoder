#include <bits/stdc++.h>
using namespace std;

int main() {
	/*
	Stack follows Last in First out Principle.
	
	The functions associated with stack are: 
        empty() – Returns whether the stack is empty – Time Complexity : O(1) 
        size() – Returns the size of the stack – Time Complexity : O(1) 
	top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
        push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
        pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) */
    
    stack<int>st;
    st.push(12);
    st.push(21);
    st.push(22);
    st.push(34);
    st.pop();
    
    //Traversing into the Stack
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

	return 0;
}
