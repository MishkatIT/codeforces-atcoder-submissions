/*
    author    : MishkatIT
    created   : Tuesday 2023-06-20-20.56.57
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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        while(n != 1)
        {
            ans += n;
            n >>= 1;
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}
