/*
    author    : MishkatIT
    created   : Wednesday 2023-04-26-01.49.38
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
int main()
{
    fio;
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll temp = 0;
        while(arr[i] % 2 == 0 && arr[i] != 0)
        {
            arr[i] /= 2;
            mx = max(mx, ++temp);
        }
    }
    cout << mx << '\n';
    return 0;
}