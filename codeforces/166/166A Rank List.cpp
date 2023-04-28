/*
    author    : MishkatIT
    created   : Friday 2023-04-28-17.32.40
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    k--;
    map<pair<int, int>, int> mp;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[ {x, y}]++;
        v[i] = {x, y};
    }
    sort(v.begin(), v.end(), [](const auto& a, const auto& b)
    {
        if(a.first == b.first)
        {
            return a.second <= b.second;
        }
        return a.first >= b.first;
    });
    cout << mp[v[k]];
    cout << '\n';
//int x = 1;
//    for(auto  &i : v)
//    {cout << x ++ << ' ';
//      cout << i.first << ' ' << i.second << '\n';
//    }
//    cout << '\n';
    return 0;
}

