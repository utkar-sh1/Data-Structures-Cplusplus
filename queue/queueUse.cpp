#include <iostream>
#include<queue>
using namespace std;
//#include "queueLL.h"
#include<queue>
int main()
{ //stack<int> s;
    queue<int> s;
    cout << s.empty() << endl;
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    cout << s.empty() << endl;
    s.push(106);
    s.push(107);
    s.push(108);
    s.push(109);
    s.push(110);


    
    //s.pop();
    cout<<s.size()<<endl;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout<<s.front()<<endl;
    s.pop() ;
    cout << s.empty() << endl;

    return 0;
}