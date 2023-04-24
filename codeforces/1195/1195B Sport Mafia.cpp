/*
    author    : MishkatIT
    created   : Tuesday 2023-04-25-00.45.59
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    using ll = long long;
    ll n, k;
    cin >> n >> k;
    ll low = 1, high = n;
    while(low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll x = mid * (mid + 1) / 2;
        ll y = x - (n - mid);
        if(y == k)
        {
            cout << n - mid;
            return 0;
        }
        else if(y < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;
}

