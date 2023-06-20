/*
    author    : MishkatIT
    created   : Tuesday 2023-06-20-19.05.33
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
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& i : v)
        {
            cin >> i;
        }
        int x = 1;
        int y = (n / 2) + 1;
        cout << (n / 2) * 6 << '\n';
        while(x <= n / 2)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << 1 << ' ' << x << ' ' << y << '\n';
                cout << 2 << ' ' << x << ' ' << y << '\n';
            }
            x++, y++;
        }
    }
    return 0;
}
