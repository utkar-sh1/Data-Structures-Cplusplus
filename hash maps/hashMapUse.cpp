#include <iostream>
#include "hashmap.h"
using namespace std;
int main()
{
    ourmap<int> map;
    for (int i = 0; i < 10; i++)
    {
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        int value = i + 1;
        //cout<<key<<" "<<value<<endl;
       map.insert(key, value);
        cout<<map.getLoadFactor()<<endl;
    }
    //int k=map.size();
    cout << map.size() << endl;
    map.remove("abc2");
    for (int i = 0; i < 10; i++)
    {
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        int value = i + 1;
        //cout<<key<<" "<<value<<endl;
       //map.insert(key, value);
        //cout<<map.getLoadFactor()<<endl;
        cout<<key<<":"<<map.getValue(key)<<endl;
    }
     cout << map.size() << endl;
    return 0;
}