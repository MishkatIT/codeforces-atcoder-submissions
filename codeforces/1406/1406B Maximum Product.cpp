/*
    author    : MishkatIT
    created   : Thursday 2023-06-29-00.32.26
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 1;
        for (int x = n - 1; x >= (n - 5); x--)
        {
            ans *= v[x];
        }
        ans = max(ans, (v[0] * v[1] * v[n - 1] * v[n - 2] * v[n - 3]));
        ans = max(ans, (v[0] * v[1] * v[2] * v[3] * v[n - 1]));
        cout << ans << '\n';
    }
    return 0;
}

