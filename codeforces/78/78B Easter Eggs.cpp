/*
    author    : MishkatIT
    created   : Tuesday 2023-08-22-17.24.31
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
    int n;
    cin >> n;
    string s = "OYGRBIV";
    string ans = "";
    for (int i = 0; i < (n / 7) * 7; i++) {
        cout << s[i % 7];
    }

    for (int i = 0; i < n % 7; i++) {
        cout << s[i % 4 + 3];
    }

    return 0;
}

