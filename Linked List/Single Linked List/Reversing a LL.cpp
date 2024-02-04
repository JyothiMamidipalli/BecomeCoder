#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    int n,x;
    cin>>n;
    Node* Head;
    Node* it;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if (i==0){
            Head = new Node(x);
            it = Head;
        }
        else{
            Node* N = new Node(x);
            N->next = Head;
            Head = N;
        }
    }
    Node* t = Head;
    while (t!=NULL){
        cout << t->data << " ";
        t = t->next;
    }
    return 0;
    
}
