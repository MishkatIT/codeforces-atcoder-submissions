/*
    author    : MishkatIT
    created   : Sunday 2023-10-22-23.10.09
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

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        ll ex = 0;
        for (int i = n - 1, r = n - 1; i >= 0; i--) {
            while(r >= 0 && str[r] == '1') {
                r--;
            }
            ex += (i - r);
            if(r >= 0) {
                str[r] = '1';
                cout << ex << ' ';
            } else {
                cout << -1 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
