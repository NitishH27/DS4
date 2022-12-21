#include<iostream>
using namespace std;
const int LEN = 100;
class Stack{
    protected:
        int arr[LEN];
        int top = -1;
    public:
        // Stack(){

        // }
        void display() { 
            for(int i=top;i>=0;i--)
                cout<<arr[i]<<" ";
            cout<<"\n";
        }
        int push(int x) {
            this->top++;
            this->arr[top] = x;
            return this->top;
        }
        int pop() {
            if(this->top == -1)
                return -1;
            this->top--;
            return this->arr[top+1];
        }
};

int main() {
    int ip;
    int op;
    bool run = true;
    Stack s =  Stack();
    while (run) {
        cout << "1. Push element\n2. Pop element\n3. Display\n4. Exit"<< endl;
        cin>>ip;

        switch (ip) {
            case 1:
                cout << "Enter element to push : ";
                cin>>ip;
                s.push(ip);
                break;
            case 2:
                op = s.pop();
                if (op == -1) {
                    cout << "Stack is empty "<<endl;
                }
                else {
                    cout << "Element popped: "<<op<<endl;
                }
                break;
            case 3:
                s.display();
                break;
                
            default:
                cout<<"Stack Exited\n";
                run = false;
                break;
        }
    }
}