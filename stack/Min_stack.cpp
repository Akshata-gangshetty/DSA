//SC:O(n)

#include<bits/stdc++.h>
using namespace std;
class MinStack {
    private:
            stack<pair<int,int>>st;//encapsulation concept
public:

    MinStack() {  }
    
    void push(int val) { //push()=O(1)
        if(st.empty()){
            st.push({val,val});}
        else{
            st.push({val,min(val,st.top().second)});
        }
        
    }
    
    void pop() {//pop():O(1)
        st.pop();
    }
    
    int top() { //top():O(1)
       return st.top().first;
        
    }
    
    int getMin() {//getmin():O(1)
        return st.top().second;
    }
};
