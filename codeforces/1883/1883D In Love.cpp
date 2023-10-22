/*
    author    : MishkatIT
    created   : Sunday 2023-10-22-23.22.14
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
    int q;
    cin >> q;
    multiset<int> ml, mr;
    while (q--) {
        char sign;
        cin >> sign;
        int l, r;
        cin >> l >> r;
        if (sign == '+') {
            ml.insert(l);
            mr.insert(r);
        } else {
            ml.erase(ml.find(l));
            mr.erase(mr.find(r));
        }

        if ((int)mr.size() == 0) {
            cout << "NO" << '\n';
            continue;
        }

        if (*mr.begin() < *ml.rbegin()) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

