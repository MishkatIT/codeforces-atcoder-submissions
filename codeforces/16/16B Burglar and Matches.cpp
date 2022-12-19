/*
    author    : MishkatIT
    created   : Tuesday 2022-12-20-01.04.12
    problem   : B. Burglar and Matches
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> b >> a;
        v.emplace_back(a, b);
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for (auto& i: v)
    {
        if(n < 1)
            break;
        ans += (min(n, i.second) * i.first);
        n -= i.second;
    }
    cout << ans << '\n';
    return 0;
}

