/*
    author    : MishkatIT
    created   : Saturday 2023-04-08-20.05.26
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
        int n, m;
        cin >> n >> m;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = 0;
        if(x1 + 1 <= n) ans++;
        if(x1 - 1 > 0)ans++;
        if(y1 + 1 <= m)ans++;
        if(y1 - 1 > 0) ans++;
        int bns = 0;
        if(x2 + 1 <= n) bns++;
        if(x2 - 1 > 0)bns++;
        if(y2 + 1 <= m)bns++;
        if(y2 - 1 > 0) bns++;
        cout << min(ans, bns) << '\n';
    }
    return 0;
}

