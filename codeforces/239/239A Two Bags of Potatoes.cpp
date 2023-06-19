/*
    author    : MishkatIT
    created   : Monday 2023-06-19-19.16.09
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
    long long y, k, n;
    cin >> y >> k >> n;
    long long l = (y / k) * k + k;
    bool ok = true;
    for (; l <= n; l += k)
    {
        cout << l - y << ' ';
        ok = false;
    }
    if(ok)
        cout << -1 << '\n';
    return 0;
}

