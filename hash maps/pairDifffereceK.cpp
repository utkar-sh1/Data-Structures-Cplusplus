#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int LongestConsecutiveSequence(int *a, int size)
{
    //unordered_map<int, bool> map1;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        seen[a[i]] = true;
    }
    int maxLen=0;
    int start=0;
    for(int i=0;i<size;i++)
    {
        
    }

}
int main()
{
    int a1[] = {2, 12, 9, 16, 10, 5, 3, 20, 25, 11, 1, 8, 6};
    int a2[] = {9, 1, 8, 6, 3, 4, 2, 7, 10, 15};
    int n1 = sizeof(a1) / sizeof(int);
    int n2 = sizeof(a2) / sizeof(int);
    //cout << pairDifferenceK(a1, n1, 3);
    LongestConsecutiveSequence(a1,n1);
    //cout<<
    return 0;
}
