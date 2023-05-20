/*
    author    : MishkatIT
    created   : Sunday 2023-05-21-00.36.03
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
    ll ans = -1;
    while(n--)
    {
        ll a, b;
        cin >> a >> b;
        ans = max(ans, a + b);
    }
    cout << ans;
    return 0;
}

