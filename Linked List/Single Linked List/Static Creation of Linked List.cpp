#include<bits/stdc++.h>
using namespace std;
//Node Creation
class Node{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data=val;
        this->next=NULL;
    }
};
int main()
{
    Node* nn = new Node(1);
    Node* temp=nn;
    Node* n1=new Node(2);
    nn->next=n1;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
