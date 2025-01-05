#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    queue<int> que;
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        que.push(x);
    }
    cout<<que.front()<<endl;
    cout<<que.back()<<endl;
    cout<<que.size()<<endl;
    
    while (!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();
    }
    
    return 0;
}
