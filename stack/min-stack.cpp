class MinStack {
public:
vector<pair<int,int>> t;
    MinStack() 
    {}

    void push(int value)
    {
        if(t.empty())t.push_back({value,value});
        else t.push_back({value,min(t.back().second,value)});
    }
    
    void pop() 
    {
        t.pop_back();
    }
    
    int top() 
    {
        return t.back().first;
    }
    
    int getMin() 
    {
        return t.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */