class MyQueue {
public:
    stack<int> s;

    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> s1;
        int val;
        while(!s.empty())
        {
            val = s.top();
            s.pop();
            if(s.empty()) break;
            s1.push(val);
        }
        while(!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
        }
        return val;
    }
    
    int peek() {
        stack<int> s1;
        int val;
        while(!s.empty())
        {
            val = s.top();
            s.pop();
            // if(s.empty()) break;
            s1.push(val);
        }
        while(!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
        }
        return val;
    }
    
    bool empty() {
        return s.empty();
    }
};