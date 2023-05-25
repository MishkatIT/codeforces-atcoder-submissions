/*
    author    : MishkatIT
    created   : Thursday 2023-05-25-20.06.08
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
        int x, k;
        cin >> x >> k;
        if(x % k == 0)
        {
            cout << 2 << '\n';
            cout << x - 1 << ' ' << 1 << '\n';
        }
        else
        {
            cout << 1 << '\n';
            cout << x << '\n';
        }
    }
    return 0;
}
