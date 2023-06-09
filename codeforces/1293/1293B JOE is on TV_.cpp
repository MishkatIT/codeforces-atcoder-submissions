/*
    author    : MishkatIT
    created   : Friday 2023-06-09-22.57.01
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

    long double ans = 0;
    for(int i = 1; i <= n; i++)
        ans += 1.00 / i;

    cout << fixed << setprecision(12) << ans << '\n';
    return 0;
}
