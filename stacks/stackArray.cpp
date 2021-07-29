#include <climits>
class StackUsingArray
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    //Dynamic Stack
    StackUsingArray()
    {
        data = new int[capacity];
        nextIndex = 0;
        capacity = 4;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        //(nextIndex==0)?(return true):return false;
        return nextIndex == 0;
    }
    //insert
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // Static Stack
    /*
    StackUsingArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity=totalSize;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        //(nextIndex==0)?(return true):return false;
        return nextIndex==0;
    }
    //insert
    void push(int element)
    {
      if(nextIndex==capacity)
      {
          cout<<"Stack full"<<endl;
          return;
      }
      data[nextIndex]=element;
      nextIndex++;
    }
      */
    //delete
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};