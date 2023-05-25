/*
    author    : MishkatIT
    created   : Thursday 2023-05-25-15.09.08
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
        ll z1, o1, t1, z2, o2, t2;
        cin >> z1 >> o1 >> t1 >> z2 >> o2 >> t2;
        ll sum = 0;
        ll mn = min(t1, o2);
        sum += (2 * mn);
        t1 -= mn;
        t2 -= min(t2, z1);
        t2 -= min(t1, t2);
        sum -= (2 * min(t2, o1));
        cout << sum << '\n';
    }
    return 0;
}
