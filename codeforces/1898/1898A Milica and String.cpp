/*
    author    : MishkatIT
    created   : Sunday 2023-11-19-20.34.36
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        if (count(str.begin(), str.end(), 'B') == k) {
            cout << 0 << '\n';
            continue;
        }
        str = "#" + str;
        int cnt = 0, i;
        for (i = n; i > 0; i--) {
            if (str[i] == 'B') {
                if (k) k--;
                else break;
            }
        }

        cout << 1 << '\n';
        if (k) {
            int ind = 0;
            while(k) {
                ind++;
                if (str[ind] == 'A') {
                    k--;
                }
            }
            cout << ind << " B" << '\n';
        } else {
            cout << i << " A" << '\n';
        }
    }
    return 0;
}

