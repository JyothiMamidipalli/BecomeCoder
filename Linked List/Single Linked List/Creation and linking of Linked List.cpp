#include <bits/stdc++.h>
using namespace std;
//Creating a Linked List
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
    Node *temp1 = new Node(10);
    Node *temp2 = new Node(20);
    Node *temp3 = new Node(80);
  //Linking a linked list
    temp1->next = temp2;
    temp2->next = temp3;
    while(temp1 != NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
	
	return 0;
}
