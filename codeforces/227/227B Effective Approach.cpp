/*
    author    : MishkatIT
    created   : Thursday 2023-05-18-21.30.11
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<ll>v(n + 10);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x] = i;
    }
    ll a = 0, b = 0;
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        a += v[x];
        b += (n - v[x] + 1);
    }
    cout << a << ' ' << b;
    return 0;
}

