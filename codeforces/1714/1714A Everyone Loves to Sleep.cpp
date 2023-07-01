/*
    author    : MishkatIT
    created   : Saturday 2023-07-01-19.12.18
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
    int t;
    cin >> t;
    while(t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int tot = 1e5;
        for (int i = 0; i < n; i++)
        {
            int hh, mm;
            cin >> hh >> mm;
            int cnt = 0;
            for (int x = h, y = m; x != hh || y != mm;)
            {
                y++;
                x += (y == 60);
                x %= 24;
                y %= 60;
                cnt++;
            }
            tot = min(tot, cnt);
        }
        cout << tot / 60 << ' ' << tot % 60 << '\n';
    }
    return 0;
}
