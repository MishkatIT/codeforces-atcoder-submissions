/*
    author    : MishkatIT
    created   : Thursday 2023-08-17-20.39.06
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
        string str;
        cin >> str;
        if(str == "()") {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            int n = str.size();
            bool f = false;
            for (int i = 0; i + 1 < n; i++) {
                if(str[i] == str[i + 1]) {
                    f = true;
                    break;
                }
            }
            if(f) {
                for (int i = 0; i < n; i++) {
                    cout << "()";
                }
                cout << '\n';
            } else {
                for (int i = 0; i < n; i++) {
                    cout << "(";
                }
                for (int i = 0; i < n; i++) {
                    cout << ")";
                }
                cout << '\n';
            }
        }
    }
    return 0;
}

