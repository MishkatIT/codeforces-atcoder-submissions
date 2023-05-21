/*
    author    : MishkatIT
    created   : Monday 2023-05-22-02.48.07
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

bool isPossible(ll a, ll b, ll c, ll d)
{
    ll x = a / b +  (a % b > 0);
    ll y = c / d + (c % d > 0);
//    debug(x)debug(y)
    if(x <= y)
        return true;
    return false;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll hc, dc;
        cin >> hc >> dc;
        ll hm, dm;
        cin >> hm >> dm;
        ll k, w, a;
        cin >> k >> w >> a;
        string ans = "NO";
        for (int i = 0; i <= k; i++)
        {
//            ll x = i * w + dc;
//            cout << hc << ' ';
//            cout << x << '\n';
//            cout << hm << ' ';
//            cout << dm << '\n';
            if(isPossible(hm, i * w + dc, (k - i) * a + hc, dm))
            {
                ans = "YES";
                break;
            }
//            x = (k - i) * a + hc;
//        cout << x << ' ';
//        cout << dc << '\n';
//        cout << hm << ' ';
//        cout << dm << '\n';
//            if(isPossible(hm, dc, x, dm))
//            {
//                ans = "YES";
//                break;
//        }
        }
        cout << ans << '\n';
//        ll x = k * w + dc;
////        cout << hc << ' ';
////        cout << x << '\n';
////        cout << hm << ' ';
////        cout << dm << '\n';
//        if(isPossible(hm, x, hc, dm))
//            ok = true;
//        x = k * a + hc;
////        cout << x << ' ';
////        cout << dc << '\n';
////        cout << hm << ' ';
////        cout << dm << '\n';
//        if(isPossible(hm, dc, x, dm))
//            ok = true;
//        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}

