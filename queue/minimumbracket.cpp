#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int minimumbracket(char exp[])
{
    stack<char> s;
    if (strlen(exp) % 2 != 0)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < strlen(exp); i++)
        {
            if (exp[i] == '{')
            {
                s.push(exp[i]);
            }
            else if (exp[i] == '}')
            {
                if (s.empty())
                {
                    s.push(exp[i]);
                }
                else if (!s.empty())
                {
                    if (s.top() == '{')
                    {
                        s.pop();
                    }
                    else if (s.top() != '{')
                    {
                        s.push(exp[i]);
                    }
                }
            }
        }
        int count = 0;
        while (!s.empty())
        {
            char c1 = s.top();
            s.pop();
            char c2 = s.top();
            s.pop();
            if (c1 == c2)
            {
                count++;
            }
        }
        return count;
    }
}
int main()
{
    char x[1000];
    cin >> x;
    cout << x << endl;
    cout << minimumbracket(x);
    //minimumbracket(x);
    return 0;
}