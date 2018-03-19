class MinStack {
public:
    stack<int> s1;
    int top_val=0;
    
    void push(int x) {
        s1.push(x);
    }
    
    void pop() {
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        stack<int> s2;
        s2=s1;
        int min=s2.top();
        while(!s2.empty()){
            // cout<<"inloop"<<endl;
            if(s2.top()<min){
                // cout<<"inif"<<endl;
                min=s2.top();
                // cout<<min<<endl;
            }
            s2.pop();
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */