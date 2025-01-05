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

    int sz = 0;
    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        if(head == NULL)
        {
            tail == NULL;
            return;
        }
        node *del = head;
        head = head->next;
        delete del;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main(int argc, char const *argv[])
{
    myqueue que;
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        que.push(x);
    }
    // cout<<que.front()<<endl;
    // cout<<que.back()<<endl;
    // cout<<que.size()<<endl;
    while (!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();
    }
    
    return 0;
}
