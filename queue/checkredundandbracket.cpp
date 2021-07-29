#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
bool IsredParanthesis(char exp[])      //jb tk closing bracket naa incounter ho tb tk push kro phir stack pe iterate kro aor counter me check kro ki count zero ya 1(jb ek hi element ho like (a)) agar poora iteration ho jaay to not redundadnt return kro
{
    stack<char> s;
    bool ans = false;
    for (int i = 0; i < strlen(exp); i++)
    {
        if ((exp[i] != ')')) //(!((exp[i] == '}') || (exp[i] == ')') || (exp[i] == ']')))
        {
            s.push(exp[i]);
        }
        else //(exp[i] == '}') || (exp[i] == ')') || (exp[i] == ']')
        {
            int count = 0;
            while (!s.empty() && (s.top() != '('))
            {
                 s.pop();
                 count++;
            }
            s.pop();
            if(count==0|| count ==1)
            {
              return true;
            }
        }
    }
    return false;
    
}
int main()
{
    char x[1000000];
    cin >> x;
    cout << x << endl;
    cout << IsredParanthesis(x);

    return 0;
}
