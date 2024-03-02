/*
    author    : MishkatIT
    created   : Saturday 2024-03-02-22.38.36
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mxIdx = 0;

        auto query = [&](int a, int b, int c, int d) {
            cout << "? " << a << ' ' << b << ' ' << c << ' ' << d << endl;
            char resp;
            cin >> resp;
            return resp;
        };
        for (int i = 1; i < n; i++) {
            if (query(mxIdx, mxIdx, i, i) == '<') {
                mxIdx = i;
            }
        }

        int mnIdx = 0;
        for (int i = 1; i < n; i++) {
            char resp = query(mxIdx, mnIdx, mxIdx, i);
            if (resp == '<') {
                mnIdx = i;
            } else if(resp == '=') {
                char resp = query(mnIdx, mnIdx, i, i);
                if (resp == '>') {
                    mnIdx = i;
                }
            }
        }
        cout << "! " << mxIdx <<' ' << mnIdx << endl;
    }
    return 0;
}

