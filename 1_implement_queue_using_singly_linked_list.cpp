#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myqueue
{
    public:
    node *head = NULL;
    node *tail = NULL;

    void push(int val)
    {
        node* nNode = new node(val);
        if(head == NULL)
        {
            head = nNode;
            tail = nNode;
            return;
        }
        tail->next = nNode;
        tail = nNode;
    }

};

int main(int argc, char const *argv[])
{
    
    return 0;
}
