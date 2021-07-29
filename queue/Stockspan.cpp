#include <iostream>
#include <stack>
using namespace std;
void stockspan(int a[], int n)
{
    stack<int> s;
    int stockspan[n];
    s.push(0);
    stockspan[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && a[i] > a[s.top()]) // if(a[i] > a[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            stockspan[i] = i + 1;
        }
        else
        {
            stockspan[i] = i - s.top();
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++) //print
    {
        cout << stockspan[i] << " ";
    }
}
int main()
{

    int ar[] = {60, 70, 80, 100, 90, 75, 80, 120};
    //int ar1[] = {5, 3, 8, 7, 10, 7, 7, 12, 16};
    int n = sizeof(ar) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    stockspan(ar, n);
    return 0;
}