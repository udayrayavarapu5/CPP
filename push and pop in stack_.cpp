#include <iostream>
using namespace std;
#define MAX 100 
class StackInterface {
public:
    virtual void push(int x) = 0;
    virtual void pop() = 0;
    virtual bool isEmpty() = 0;
    virtual int top() = 0;
    virtual bool isFull() = 0;
    virtual ~StackInterface() {} 
};
class Stack : public StackInterface {
private:
    int a[MAX];
    int topIndex;
public:
    Stack() {
        topIndex = -1;
    }
    void push(int x) override {
        if (isFull()) {
            cout << "The stack is full" << endl;
            return;
        }
        a[++topIndex] = x;
        cout << "push: " << x << endl;
    }
    void pop() override {
        if (isEmpty()) {
            cout << "The stack is empty" << endl;
            return;
        }
        topIndex--;
    }
    bool isEmpty() override {
        return (topIndex < 0);
    }
    bool isFull() override {
        return (topIndex >= MAX - 1);
    }
    int top() override {
        if (isEmpty()) {
            cout << "The stack is empty" << endl;
            return -1;
        }
        return a[topIndex];
    }
};
int main() {
    Stack s;
    s.push(19);
    s.push(20);
    s.push(21);
    s.push(22);
    cout << "The top element: " << s.top() << endl;
    s.pop();
    cout << "The top element after popping: " << s.top() << endl;
    return 0;
}
