#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<char,int>mp;
    mp['a']++;
    mp['b']++;
    mp['c']++;
    mp['d']++;
    cout<<mp['e']<<endl;
    // when there is a something not in the map then map will have value 0.
    return 0;
}