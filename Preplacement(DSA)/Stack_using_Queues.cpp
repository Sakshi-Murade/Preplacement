#include <queue>
#include <iostream>
using namespace std;

class MyStack {
public:
    MyStack() {}

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        if (q1.empty()) {
            throw runtime_error("Stack is empty");
        }
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int result = q1.front();
        q1.pop();
        swap(q1, q2);
        return result;
    }

    int top() {
        if (q1.empty()) {
            throw runtime_error("Stack is empty");
        }
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int result = q1.front();
        q2.push(q1.front()); 
        q1.pop();
        swap(q1, q2);
        return result;
    }

    bool empty() {
        return q1.empty();
    }

private:
    queue<int> q1, q2;
};

int main() {
    MyStack myStack;
    myStack.push(1);
    myStack.push(2);
    cout << myStack.top() << endl;   
    cout << myStack.pop() << endl;   
    cout << myStack.empty() << endl; 
    return 0;
}
