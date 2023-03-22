/*
    author    : MishkatIT
    created   : Wednesday 2023-03-22-22.28.29
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        map<char, int> mp;
        for (char c = 'a'; c <= 'z'; c++)
        {
            mp[c] = (c - 'a' + 1);
        }
        int ans = abs(mp[str.front()] - mp[str.back()]);
        char a = str.front();
        char b = str.back();
        if(a > b)
            swap(a, b);
        vector<pair<char, int>> v;
        for (int i = 1; i < (int)str.length() - 1; i++)
        {
            if(str[i] >= a && str[i] <= b)
            {
                v.emplace_back(str[i], i + 1);
            }
        }
        if(str.front() > str.back())
            sort(v.rbegin(), v.rend());
        else
            sort(v.begin(), v.end());
        cout << ans << ' ' << (int)v.size() + 2 << '\n';
        cout << 1 << ' ';
        for(auto &i : v)
            cout << i.second << ' ';
        cout << str.length() << '\n';
    }
    return 0;
}
