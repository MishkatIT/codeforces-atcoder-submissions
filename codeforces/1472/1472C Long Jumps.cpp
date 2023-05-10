/*
    author    : MishkatIT
    created   : Thursday 2023-05-11-02.11.19
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        ll ans = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if(i + v[i] < n)
                v[i] += v[i + v[i]];
            ans = max(ans, v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
