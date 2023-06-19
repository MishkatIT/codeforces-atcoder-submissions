/*
    author    : MishkatIT
    created   : Monday 2023-06-19-23.33.06
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

ll sum (ll n)
{
    ll s = 0;
    while(n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        while(true)
        {
            if(__gcd(n, sum(n)) > 1)
            {
                cout << n << '\n';
                break;
            }
            n++;
        }
    }
    return 0;
}

