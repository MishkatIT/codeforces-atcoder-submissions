/*
    author    : MishkatIT
    created   : Sunday 2023-07-23-22.22.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;
string ans = "";
void func(int& ra, int& pa, int& sa)
{
    if(ra) {
        ans += 'R';
        ra--;
    } else if(pa) {
        ans += 'P';
        pa--;
    } else {
        ans += 'S';
        sa--;
    }
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        ans.clear();
        int n;
        cin >> n;
        int ra, pa, sa;
        cin >> ra >> pa >> sa;
        string str;
        cin >> str;
        int rb, pb, sb;
        rb = pb = sb = 0;
        for (auto& i: str) {
            rb += (i == 'R');
            pb += (i == 'P');
            sb += (i == 'S');
        }
        int mn;
        mn = min(sb, ra);
        sb -= mn, ra -= mn;
        mn = min(rb, pa);
        rb -= mn, pa -= mn;
        mn = min(pb, sa);
        pb -= mn, sa -= mn;
//          debug(ra)debug(pa)debug(sa)
//        debug(rb + pb + sb)
        if (n - (rb + pb + sb) < (n + 1) / 2) {
            cout << "NO" << '\n';
        } else {
            for (auto& i: str) {
                if(i == 'R') {
//                    cout << "dfd" << '\n';
                    if(rb) {
                        func(ra, pa, sa);
                        rb--;
                    } else {
                        ans += 'P';
                    }
                } else if(i == 'P') {
                    if(pb) {
                        func(ra, pa, sa);
                        pb--;
                    } else {
                        ans += 'S';
                    }
                } else {
                    if(sb) {
                        func(ra, pa, sa);
                        sb--;
                    } else {
                        ans += 'R';
                    }
                }
            }
//            debug(ra)debug(pa)debug(sa)
            cout << "YES" << '\n' << ans << '\n';
        }
    }
    return 0;
}
