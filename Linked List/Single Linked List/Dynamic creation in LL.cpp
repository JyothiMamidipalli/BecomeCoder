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
    Node* Head =  new Node(0);
    Node* temp = Head;
    for(int i=0;i<n;i++)
    {
       cin>>x;
       Node* BC = new Node(x);
       temp->next = BC;
       temp = temp->next;
    }
    while(Head!=NULL)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }
}
