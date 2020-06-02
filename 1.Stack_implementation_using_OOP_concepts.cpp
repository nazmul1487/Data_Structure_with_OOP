#include<iostream>
using namespace std;

class Stack
{
    int top;
public:
    Stack()
    {
        top=-1;
    }

    int arr[10];
    void push(int x);
    int pop();
    void isEmpty();
};

void Stack::push(int x)
{
    if(top>=4)
    {
        cout<< "Stack Overflow"<<endl;
    }
    else
    {
        arr[++top]= x;
        cout << "Element Inserted"<<endl;
    }
}

int Stack::pop(){
    if(top<0)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        arr[top--];
    }
}

void Stack::isEmpty()
{
    if(top<0)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Stack is not Empty"<<endl;
    }
}

int main()
{


    Stack s1;
    s1.push(10);
    s1.push(11);
    s1.push(11);
    s1.push(11);
    s1.push(11);
    s1.push(11);
    s1.push(11);
    s1.push(11);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();


    return 0;
}
