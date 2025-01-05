#include<bits/stdc++.h>
using namespace std;


class myqueue
{
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
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
