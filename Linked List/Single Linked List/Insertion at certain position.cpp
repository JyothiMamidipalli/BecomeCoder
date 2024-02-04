#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    Node* t1 = new Node(10);
    Node* t2 = new Node(20);
    Node* t3 = new Node(80);
    Node* t4 = new Node(120);
    t1 -> next=t2; //Link first node with second node
    t2 -> next=t3;//Link second node with third node
    t3 -> next=t4;//Link third node with fourth node
    Node* temp = t1;
    int data = 116;
    int pos = 3;
    while(pos - 1>1){
        temp=temp->next;
        pos--;
    }
    Node* nn = new Node(data);
    nn->next = temp->next;
    temp->next = nn;
    while (t1)
    {
        cout<<t1->data<<" ";
        t1=t1->next;
    }
    
}
