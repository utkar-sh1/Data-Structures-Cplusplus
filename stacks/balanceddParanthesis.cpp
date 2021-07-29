#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
bool balancedParanthesis(char exp[])
{
    stack<char> s;
    int len = strlen(exp);

    for (int i = 0; i < len; i++)
    {
        if ((exp[i] == '{') || (exp[i] == '(') || (exp[i] == '[')) //"{" || "("||"[")
        {
            s.push(exp[i]);
        }

        else if ((exp[i] == '}') || (exp[i] == ')') || (exp[i] == ']'))
        {
            if (s.empty())
            {
                return false;
            }
            char ch = s.top();
            s.pop();
            if (exp[i] == '}' && ch == '{')
                continue;
            else if (exp[i] == ')' && ch == '(')
                continue;
            else if (exp[i] == ']' && ch == '[')
                continue;
            else
                return false;
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char x[100];
    cin >> x;
    cout << x << endl;
    cout << balancedParanthesis(x);
    //balancedParanthesis(x);

    //cout << s.size();

    return 0;
}