/*
    author    : MishkatIT
    created   : Monday 2022-10-31-03.23.49
    problem   : 219 A. k-String,cpp
*/
#include<iostream>
#include<map>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int k;
    string str, s;
    cin >> k >> str;
    map<char, int> mp;
    for(int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for(int i = 0; i < k; i++)
    {
        for(auto i: mp)
        {
            if(i.second % k)
            {
                cout << "-1";
                return 0;
            }
            for(int j = 0; j < i.second / k; j++)
            {
                s.push_back(i.first);
            }
        }
    }
    cout << s;

    return 0;
}

