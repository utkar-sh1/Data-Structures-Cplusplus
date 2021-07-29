template <typename T>
class Queue
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    Queue(int s)
    {
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }
    //insertion
    //Dynamic
    void enqueue(T element)
    {
        if (size == capacity)
        {
            T *newData = new T[2 * capacity];
            int j = 0;
            for (int i = firstIndex; i < capacity; i++)
            {
                newData[j] = data[i];
                j++;
            }
            for (int i = 0; i < firstIndex; i++)
            {
                newData[j] = data[i];
                j++;
            }
            delete[] data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex++;
        }
        size++;
    }
    /*  Static
    void enqueue(T element)
    {
        if (size == capacity)
        {
            cout << "Queue Full !" <<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex++;
        }
        size++;
    }*/
    T front()
    {
        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }

    //size
    int getSize()
    {
        return size;
    }
    //empty
    bool isEmpty()
    {
        return getSize() == 0;
    }
};
