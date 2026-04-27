#include <bits/stdc++.h>
using namespace std;

class LL_Node
{
public:
    int data;
    LL_Node *next;

    LL_Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

LL_Node* insert_at_beginning(LL_Node* head,int val){
    LL_Node* new_node = new LL_Node(val);
    new_node->next = head;
    head = new_node;
    return head;
}

void traversal(LL_Node* head){
    LL_Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    LL_Node *start = new LL_Node(arr[0]);
    LL_Node *head = start;
    for (int i = 1; i < 5; i++)
    {
        LL_Node *temp = new LL_Node(arr[i]);
        start->next = temp;
        start = start->next;
    }

    
    traversal(head);
    head = insert_at_beginning(head,0);
    traversal(head);
    
    return 0;
}
