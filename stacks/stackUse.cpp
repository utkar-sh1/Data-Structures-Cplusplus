#include <iostream>
using namespace std;
//#include<stack>
#include "stackArray.cpp"
int main()
{
    StackUsingArray s;
    //StackUsingArray<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    s.push(107);
    s.push(108);

    //cout << s.empty() << endl;
    cout << s.top() << endl;
    //s.pop();
    cout << s.size() << endl;
    //cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
    StackUsingArray s1;
    s1.push(109);
    s1.push(110);
    cout << s1.top() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.isEmpty() << endl;

    return 0;
}