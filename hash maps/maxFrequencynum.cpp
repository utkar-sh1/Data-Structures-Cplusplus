#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxFrequencynum(int *a, int size)
{
    //vector<int> output;
    unordered_map<int, int> Freq;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (Freq.count(a[i]) > 0)
        {
            Freq[a[i]]++;
            if (Freq[a[i]] > max)
            {
                max = Freq[a[i]];
            }
        }
        else
        {
            Freq[a[i]] = 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (Freq[a[i]] == max)
        {
            int k = a[i];
            return k;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 2, 2, 3, 3, 3, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    /*vector<int> output = removeDuplicate(a, n);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    */
    cout << maxFrequencynum(a, n);

    return 0;
}
