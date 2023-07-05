/*
    author    : MishkatIT
    created   : Wednesday 2023-07-05-19.31.44
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
    int n;
    cin >> n;
    vector<ll>v(n);
    for (auto& i : v)
    {
        cin >> i;
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        while(i + 1 < n && v[i] * 2 >= v[i + 1]) cnt++, i++;
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}

