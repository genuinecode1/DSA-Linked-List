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

    //Traversal in linked list
    LL_Node * temp = head;
    //we created temparory poniter because of if we use head we lost access of the list.
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
