/*
    author    : MishkatIT
    created   : Monday 2023-04-24-13.24.25
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        using ll = long long;
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll sum = v[0];
        ll ans = v[0];
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i] - sum;
            ans = max(ans, v[i]);
            sum = sum + v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}

