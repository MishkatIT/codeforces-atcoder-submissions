/*
    author    : MishkatIT
    created   : Monday 2023-12-18-20.57.14
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
        string str;
        cin >> str;
        int zero = count(str.begin(), str.end(), '0');
        int one = str.size() - zero;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '0') {
                if (one) one--;
                else break;
            } else {
                if (zero) zero--;
                else break;
            }
        }
        cout << zero + one << '\n';
    }
    return 0;
}

