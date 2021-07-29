#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void pairSum(int *a, int size)
{
    int c = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        //freq[a[i]]=1;
        int x = -a[i];
        if (m[x] == 0)
        {
            m[a[i]]++;
        }
        else
        {
            c += m[x];
            m[a[i]]++;
        }
    }
    cout << "count :" << c << endl;
}
int main()
{
    int a1[] = {2, 2, 8, 5, -2, 3};
    int a2[] = {2, 3, 4, 7};
    int n1 = sizeof(a1) / sizeof(int);
    int n2 = sizeof(a2) / sizeof(int);
    pairSum(a1, n1);
    //vector<int> output = intersectionArray(a2, n2, a1, n1);

    /* for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
*/
    return 0;
}
