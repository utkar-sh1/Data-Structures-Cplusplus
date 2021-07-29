#include <iostream>
#include<stack>
using namespace std;
void reverseStack(stack<int> &s1, stack<int> &s2)   // imp
{
    if(s1.size() <= 1)
        return ;
    
    int lastElem = s1.top();
    s1.pop();
    reverseStack(s1,s2);
    while(!s1.empty()){
        int a = s1.top();
        s1.pop();
        s2.push(a);
    }
    s2.push(lastElem);
    //s1.push(lastElem);

    
    while(!s2.empty()){
        int a = s2.top();
        s2.pop();
        s1.push(a);
    }
}
int main()
{
stack<int> s;
stack<int> s2;
for(int i=0;i<10;i++)
{
    s.push(i+1);
}

//reverseStack(s);
reverseStack(s, s2);
for(int i=0;i<10;i++)
{
   cout<< s.top()<< " ";
    s.pop();
}

return 0;
}