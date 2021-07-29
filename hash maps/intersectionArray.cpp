#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersectionArray(int *a, int sizeA, int *b, int sizeB)
{
    vector<int> output;
    unordered_map<int, int> freq;
    for(int i=0;i<sizeA;i++)
    {
        freq[a[i]]=1;
    }
    for(int i=0;i<sizeB;i++)
    {
        if(freq.count(b[i])>0)
        {
            output.push_back(b[i]);
        }
    }
    return output;
   
}
int main()
{
    int a1[] = {2, 6, 8, 5, 4, 3};
    int a2[] = {2, 3, 4, 7};
    int n1 = sizeof(a1) / sizeof(int);
    int n2 = sizeof(a2) / sizeof(int);

    vector<int> output = intersectionArray(a2, n2, a1, n1);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}
