class MinStack {
public:
    vector< pair<int,int> > s;
	
    MinStack() { }
    
    void push(int val) 
    {
        if(s.empty())
            s.push_back({val,val}); //if stack is empty direct push value pair
        else
            s.push_back({val,min(s.back().second,val)});    
    }
    
    void pop() 
    { 
        s.pop_back(); 
    }
    
    int top() 
    { 
        return s.back().first; 
    }
    
    int getMin() 
    { 
        return s.back().second; 
    }
};