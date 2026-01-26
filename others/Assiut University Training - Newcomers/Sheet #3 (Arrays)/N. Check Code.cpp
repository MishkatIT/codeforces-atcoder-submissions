/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-02.35.27
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
    int a, b;
    cin >> a >> b;
    string str;
    cin >> str;
    bool ok = true;
    for (int i = 0; i < str.length(); i++) {
        if(i == a) {
            ok &= (str[i] == '-');
            continue;
        }
        ok &= (str[i] >= '0' && str[i] <= '9');
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}