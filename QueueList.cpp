#include "QueueList.hpp"
#include <iostream>
#include <string>
using namespace std;

QueueList::QueueList()
{
    front = nullptr;
    rear = nullptr;
    numItems = 0;
}

QueueList::~QueueList()
{
    clear();
}

void QueueList::dequeue(string &num)
{
    QueueNode *temp = nullptr;
    
    if(isEmpty())
    cout << "Queue is empty\n";
    else
    {
        num = front->value;
        temp = front;
        front = front->next;
        delete temp;
        numItems--;
    }
}

void QueueList::clear()
{
    int value;
    /*while(!isEmpty())
    dequeue(value);*/
}

bool QueueList::isEmpty() const
{
    if(numItems > 0)
    return false;
    else
    return true;
}

void QueueList::enqueue(string num)
{
    QueueNode *nodePtr;
    QueueNode *newNode;
    
    //create a new node
    newNode = new QueueNode;
    newNode -> value = num;
    newNode -> next = nullptr;
    
    if(isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    numItems++;
}
