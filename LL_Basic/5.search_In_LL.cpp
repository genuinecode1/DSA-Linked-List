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

    LL_Node *temp = head;
    int target = 7;
    bool flag =true;
    // count variable to count length of Linked list
    while (temp != NULL)
    {
        if(temp->data == target){
            cout<<"element found";
            flag = false;
            break;
        }
        temp = temp->next;
    }
    if(flag){
        cout<<"element not found";
    }
    return 0;
}