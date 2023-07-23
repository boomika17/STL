 #include <iostream>
#include <vector>
#include<stack>
#include <algorithm>
using namespace std;

template <class T>
class Stack {
    vector<T> data;

public:
    // Push an element onto the stack
    void push( T val) {
        data.push_back(val);
    }

    // Pop the top element from the stack
    void pop() {
        if (!data.empty())
            data.pop_back();
    }

    // Return the top element of the stack
    T top() {
        return data.back();
    }
    // Return the size of the stack
    int size()
    {
        return data.size();
    }

    // Check if the stack is empty
    bool empty()  {
        return data.empty();
    }
};

int main() {
    stack<int> st;

    st.push(10);
    st.push(12);
    st.push(34);
    st.push(54);
   

    cout << "Top element: " << st.top() << endl;

    st.pop();
    cout << "Top element after pop: " << st.top() <<endl;
    if(st.empty())
    cout<<"Stack is empty"<<endl;
    else
    cout<<"stack isn't empty"<<endl;
    cout << "size of stack : " << st.size()<<endl;

    return 0;
}
