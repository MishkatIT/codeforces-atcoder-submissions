/*
    author    : MishkatIT
    created   : Monday 2023-03-20-21.35.07
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        map<char, int> mp;
        mp[str[0]] = 0;
        vector<int> v;
        for(int i = 1; i < n; i++)
        {
            if(mp.find(str[i]) == mp.end())
            {
                mp[str[i]] = (mp[str[i - 1]] ^ 1);
            }
            v.push_back(mp[str[i]]);
        }
        int x = 1;
        bool ok = true;
        for(int i = 0; i < n - 1; i++)
        {
            if(v[i] != x)
            {
                ok = false;
                break;
            }
            x ^= 1;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

