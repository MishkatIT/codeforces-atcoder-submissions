/*
    author    : MishkatIT
    created   : Monday 2022-11-21-20.39.43
    problem   : B. Atilla's Favorite Problem
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        char c = 'a';
        map<char, int> mp;
        for(int i = 1; i <= 26; i++)
        {
            mp[c] = i;
            c++;
        }
        sort(str.begin(), str.end());
        cout << mp[str.back()] << '\n';

    }
}


