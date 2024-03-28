/*
    author    : MishkatIT
    created   : Friday 2024-03-29-03.12.47
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
        string x;
        x = str[0];
        x += str[1];
        int h = stoi(x);
        x = str[3];
        x += str[4];
        int m = stoi(x);
        if (h >= 12) {
            if (h == 12) {
                cout << 12;
            } else {
                if (h - 12 < 10) {
                    cout << 0;
                }
                cout << h - 12;
            }
            cout << ":";
            if (m < 10) {
                cout << 0;
            }
            cout << m;
            cout << " PM" << '\n';
        } else {
            if (h == 0) {
                cout << 12;
            } else {
                if (h < 10) {
                    cout << 0;
                }
                cout << h;
            }
            cout << ":";
            if (m < 10) {
                cout << 0;
            }
            cout << m;
            cout << " AM" << '\n';
        }

    }
    return 0;
}

