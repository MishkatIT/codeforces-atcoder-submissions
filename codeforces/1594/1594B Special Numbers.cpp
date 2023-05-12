/*
    author    : MishkatIT
    created   : Saturday 2023-05-13-02.08.08
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = (1e9 + 7);
int main()
{
    fio;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll kth = 0;
        ll power = 1;
        for (int i = 0; i < 31; i++)
        {
            if(k & (1 << i))
                kth = (kth + power) % mod;
            power = (power * n) % mod;
        }
        cout << kth << '\n';
    }
    return 0;
}
