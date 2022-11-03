/*
    author    : MishkatIT
    created   : Friday 2022-11-04-02.19.33
    problem   : 520 A. Pangram
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), :: tolower);
    map<char, int> mp;
    char c = 'a';
    for (int i = 0; i < 26; i++)
    {
        mp[c];
        c++;
    }

    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    for(auto i: mp)
    {
        if (i.second < 1)
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';

    return 0;
}

