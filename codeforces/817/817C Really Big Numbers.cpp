/*
    author    : MishkatIT
    created   : Tuesday 2023-10-17-20.11.19
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18 + 10;

int main()
{
    fio;
    ll n, s;
    cin >> n >> s;

    auto possible = [&](ll mid) {
        ll x = mid;
        ll sum = 0;
        while (x) {
            sum += (x % 10);
            x /= 10;
        }
        return (mid - sum >= s);
    };

    ll low = 0, high = n;
    ll ans = 0;
    while(low <= high) {
        ll mid = low + (high - low) / 2LL;
        if(possible(mid)) {
            ans = n - mid + 1;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans;
    return 0;
}


/*
  let x is the lowest possible number which satisfies the condition x - digit_sum(x) >= s;
  if x is the "Really Big Numbers" then x + 1 is also a "Really Big Numbers", think why :)
  so all the numbers form x to n satisfies the condition.
*/
