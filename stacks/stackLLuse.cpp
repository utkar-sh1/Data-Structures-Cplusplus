#include <iostream>
using namespace std;
#include "stackLL.cpp"
int main()
{  
    Stack<int> s;
    Stack<int> s1;
    //cout << s.top() << endl;
   // cout << s.isEmpty() << endl;
    s.push(100);
    s.push(101);
    s.push(102);
    cout << s.top() << endl;
    cout << s.getSize() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
     cout << s.getSize() << endl;
    s1.push(103);
     s1.push(104);
     cout << s1.top() << endl;
     cout << s1.pop() << endl;
     cout << s1.pop() << endl;
     cout << s1.pop() << endl;
     cout << s1.top() << endl;
     cout << s1.isEmpty() << endl;
    
   /*
   Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
     s.push(104);
    //isEmpty();
    //cout << s.size() << endl;
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
    */


    return 0;
}