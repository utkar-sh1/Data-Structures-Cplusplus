#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int lengthLongestSubsetzero(int *a, int size)
{
    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    int maxLen = 0;
    int l = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        k += a[i];
       
        if(map1.count(k)==0)
        {
            map1[k] = i;
        }
        else{
            l = i - map1[k];
            if (l > maxLen)
            {
                maxLen = l;
            }
        }
        
    }
    return maxLen;
}
int main()
{
    int a1[] = {6, 3, -1, 2, -4, 3, 1, -2, 20};
   
   int a3[]={15, -2, 2, -8, 1, 7, 10, 23};
    int a2[] = {95, -97, -387, -435, -5, -70, 897, 127, 23, 284};
    int n1 = sizeof(a1) / sizeof(int);
    int n2 = sizeof(a3) / sizeof(int);
    //cout << pairDifferenceK(a1, n1, 3);
    cout << lengthLongestSubsetzero(a3, n2);
    return 0;
}
