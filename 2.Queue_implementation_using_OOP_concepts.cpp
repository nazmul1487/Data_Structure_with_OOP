#include<iostream>
using namespace std;
#define sz 10

class Queue
{
    int arr[sz];
    int rear;
    int frnt;
public:
     Queue()
     {
         rear=frnt=-1;
     }

    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue :: enqueue(int x)
{
    if(frnt == -1) {
        frnt++;
    }
    if( rear == sz-1)
    {
        cout << "Queue is full";
    }
    else
    {
        arr[++rear] = x;
    }
}

int Queue :: dequeue()
{
    return arr[++frnt];
}

void Queue :: display()
{
    int i;
    for( i = frnt; i <= rear; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(100);
    q.enqueue(1000);
    q.enqueue(1001);
    q.enqueue(1002);
    q.dequeue();
    q.enqueue(1003);
    q.dequeue();
    q.dequeue();
    q.enqueue(1004);

    q.display();
    return 0;
}
