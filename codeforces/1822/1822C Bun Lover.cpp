/*
    author    : MishkatIT
    created   : Monday 2023-04-24-21.25.06
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = n * n - 2 * n + 2 + n * 4;
        cout << ans << '\n';

    }
    return 0;
}

