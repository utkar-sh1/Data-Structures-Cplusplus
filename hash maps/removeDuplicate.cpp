#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicate(int *a, int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;
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
    int a[] = {1, 2, 3, 2, 2, 3, 4, 4, 1, 9, 6, 5, 5, 7, 4};
    int n = sizeof(a) / sizeof(int);
    vector<int> output = removeDuplicate(a, n);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}