#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            //size++;
        }
        tail->next=newNode;
        tail=newNode;
        size++;
    }
    T dequeue()
    {
        if(head==NULL)
        {
            cout << "Queue Empty" << endl;
            return 0;
        }
        size--;
        Node<T> *temp=head;
        T ans = head->data;
        head=head->next;
        delete temp;
        return ans;
    }
    T front()
    { 
        if(head==NULL)
          return 0;
        
        return head->data;
    }
    int getSize()
    { 
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
};