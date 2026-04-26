#include<bits/stdc++.h>
using namespace std;

//Linked List Node Creation ---------->
class LL_Node{
    public:
    int data;
    LL_Node* next;

    LL_Node(int val){
        this->data  = val;
        this->next = NULL;
    }
};
int main(){
    LL_Node* first = new LL_Node(10);
    cout<<first->data;
    cout<<endl;
    cout<<first->next;
    return 0;
}
