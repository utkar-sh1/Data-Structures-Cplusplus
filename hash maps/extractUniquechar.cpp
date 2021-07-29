#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<char> removeDuplicate(string a, int size)
{
    vector<char> output;
    unordered_map<char, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(a[i]) > 0)
        {
            continue;
        }
        seen[a[i]] = true;
        output.push_back(a[i]);
    }

    return output;
}
int main()
{   
    string s;
    s="abcde";
    int size=s.length();
    vector<char> v=removeDuplicate(s,size);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}