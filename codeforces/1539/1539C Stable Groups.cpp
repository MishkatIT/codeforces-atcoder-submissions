/*
    author    : MishkatIT
    created   : Tuesday 2023-04-18-16.10.39
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
using namespace std;
int main()
{
    fio;
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> dis;
    for (int i = 1; i < n; i++)
    {
        ll temp = v[i] - v[i - 1];
        if(temp > x)
            dis.push_back(temp);
    }
    sort(dis.begin(), dis.end());
    int ans = 1;
    for (auto &i : dis)
    {
        ll required = (i - 1) / x;
        if(k >= required)
            k -= required;
        else
            ans++;
    }
    cout << ans;
    return 0;
}

