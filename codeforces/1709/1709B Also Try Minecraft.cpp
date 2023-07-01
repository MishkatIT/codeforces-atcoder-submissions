/*
    author    : MishkatIT
    created   : Saturday 2023-07-01-21.00.28
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    vector<int>v(n);
    for (auto& i : v)
    {
        cin >> i;
    }
    vector<ll> pref(n + 10), suf(n + 10);
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1];
        if(v[i - 2] > v[i - 1])
            pref[i] += v[i - 2] - v[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1];
        if(v[i] < v[i + 1])
            suf[i] += v[i + 1] - v[i];
    }

    while(m--)
    {
        int x, y;
        cin >> x >> y;
        if(x < y)
        {
            cout << pref[y] - pref[x] << '\n';
        }
        else
        {
            cout << suf[y - 1] - suf[x - 1] << '\n';
        }
    }
    return 0;
}

