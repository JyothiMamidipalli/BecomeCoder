#include <bits/stdc++.h>
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
int main() {
    //Dynamically Creation of Linked List
	int n;
	cin>>n;
	Node *Head;
	Node *temp;
	for (int i=0;i<n;i++){
	    int val;
	    cin>>val;
	    if (i==0){
	        Head = new Node(val);
	        temp = Head;
	    }
	    else{
	        Node* N = new Node(val);
	        temp->next = N;
	        temp = temp->next;
	    }
	}
	Node* t = Head;
	while (t!=NULL){
	    cout <<t->data << " ";
	    t = t->next;
	}
	return 0;
}
