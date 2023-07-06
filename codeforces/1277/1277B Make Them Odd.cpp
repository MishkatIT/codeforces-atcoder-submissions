/*
    author    : MishkatIT
    created   : Thursday 2023-07-06-22.09.12
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
        set<int, greater<int>> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x % 2 == 0)
            {
                s.insert(x);
            }
        }
        int ans = 0;
        for (auto& i: s)
        {
            if(i % 2 == 0)
            {
                ans++;
                s.insert(i / 2);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
