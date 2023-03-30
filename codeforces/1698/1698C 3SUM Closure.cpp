/*
    author    : MishkatIT
    created   : Friday 2023-03-31-04.55.08
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
        vector<int>v(n);
        map<int, bool> mp;
        for (auto &i : v)
        {
            cin >> i;
            mp[i] = true;
        }
        sort(v.begin(), v.end());
        v.push_back(v[0]);
        v.push_back(v[1]);
        bool ok = true;
        for (int i = 0; i + 2 < (int)v.size(); i++)
        {
            if(!mp[v[i] + v[i + 1] + v[i + 2]])
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

