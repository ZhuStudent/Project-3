#ifndef QueueList_hpp
#define QueueList_hpp
#include <iostream>
#include <string>
using namespace std;

class QueueList
{
    private:
    struct QueueNode
    {
        string value;
        struct QueueNode *next;
    };
    QueueNode *front;
    QueueNode *rear;
    int numItems;
    
    public:
    QueueList();
    ~QueueList();
    
    void enqueue(string);
    void dequeue(string &);
    bool isEmpty() const;
    bool isFull() const;
    void clear();
};
#endif
