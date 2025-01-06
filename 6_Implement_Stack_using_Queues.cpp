class MyStack {
public:
    queue<int> q1;

    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        queue<int> q2;
        int value;
        while(!q1.empty())
        {
            value = q1.front();
            //i made a mistake here
            q1.pop();
            if(q1.empty()) break;
            q2.push(value);
        }
        //copying values
        q1 = q2;
        return value;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};
