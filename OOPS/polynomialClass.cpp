class polynomialClass
{
    int *dataCoeff;
    int capacity;

public:
    polynomialClass()
    {
        dataCoeff = new int[10];
        for (int i = 0; i < 10; i++)
            dataCoeff[i] = 0;
        capacity = 10;
    }

    polynomialClass(polynomialClass const &d)  //copy constructor
    {
        //this->data=d.data;  Shallow Copy
        this->dataCoeff = new int[d.capacity];
        for (int i = 0; i < d.capacity; i++)
        {
            this->dataCoeff[i] = d.dataCoeff[i];
        }

        this->capacity = d.capacity;
    }

    void operator=(polynomialClass const &d)  //copy operator
    {
        this->dataCoeff = new int[d.capacity];
        for (int i = 0; i < d.capacity; i++)
        {
            this->dataCoeff[i] = d.dataCoeff[i];
        }

        this->capacity = d.capacity;
    }

    void setCoeff(int degree, int coeff)
    {

        if (degree >= capacity)     //this bloc is used for increasing size of array
        {

            int newcapacity = degree + 1;
            int *newDataCoeff = new int[newcapacity];

            for (int i = 0; i < capacity; i++)
            {
                newDataCoeff[i] = dataCoeff[i];
            }
            for (int i = capacity; i < newcapacity; i++)
                newDataCoeff[i] = 0;
            delete[] dataCoeff;
            dataCoeff = newDataCoeff;
            this->capacity = newcapacity;
        }
        dataCoeff[degree] = coeff;
    }

    polynomialClass operator+(polynomialClass const &p2) const //addition overloading
    {
        polynomialClass p3;
        p3.capacity = max(p2.capacity, this->capacity);
        p3.dataCoeff = new int[p3.capacity];

        if (capacity < p2.capacity)
        {
            int k;
            for (k = 0; k < capacity; k++)
            {
                p3.dataCoeff[k] = dataCoeff[k] + p2.dataCoeff[k];
            }
            for (; k < p2.capacity; k++)
            {
                p3.dataCoeff[k] = p2.dataCoeff[k];
            }
        }
        else
        {
            int k;
            for (k = 0; k < p2.capacity; k++)
            {
                p3.dataCoeff[k] = dataCoeff[k] + p2.dataCoeff[k];
            }
            for (; k < capacity; k++)
            {
                p3.dataCoeff[k] = dataCoeff[k];
            }
        }
        return p3;
    }

    polynomialClass operator-(polynomialClass const &p2) const //subtraction overloading
    {
        polynomialClass p3;
        p3.capacity = max(p2.capacity, this->capacity);
        p3.dataCoeff = new int[p3.capacity];

        if (capacity < p2.capacity)
        {
            int k;
            for (k = 0; k < capacity; k++)
            {
                p3.dataCoeff[k] = dataCoeff[k] - p2.dataCoeff[k];
            }
            for (; k < p2.capacity; k++)
            {
                p3.dataCoeff[k] = -p2.dataCoeff[k];
            }
        }
        else
        {
            int k;
            for (k = 0; k < p2.capacity; k++)
            {
                p3.dataCoeff[k] = dataCoeff[k] - p2.dataCoeff[k];
            }
            for (; k < capacity; k++)
            {
                p3.dataCoeff[k] = dataCoeff[k];
            }
        }
        return p3;
    }
    polynomialClass operator*(polynomialClass const &p2) const //Multiplication overloading
    {

        polynomialClass p3;
        p3.capacity = p2.capacity + capacity;
        p3.dataCoeff = new int[p3.capacity];

        for (int i = 0; i < p3.capacity; i++)
            p3.dataCoeff[i] = 0;

        for (int i = 0; i < capacity; i++)
        {
            for (int j = 0; j < p2.capacity; j++)
            {
                p3.dataCoeff[i + j] += dataCoeff[i] * p2.dataCoeff[j];
            }
        }

        return p3;
    }

    void print() const
    {
        for (int i = 0; i < capacity; i++)
        {
            if (dataCoeff[i])     //used for not printing zero
                cout << dataCoeff[i] << "x" << i << " ";
        }
        cout << endl;
    }
};