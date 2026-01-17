/*
    author    : MishkatIT
    created   : Monday 2023-10-02-12.54.26
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


vector<ll> v;

void calc()
{
    string s = "9876543210";

    for (ll i = 2; i < (1 << 10); i++) {
        string temp;
        for (ll j = 9; j >= 0; j--) {
            if(i & (1 << j)) {
                temp += s[9 - j];
            }
        }
        ll xx = stoll(temp);
        v.push_back(xx);
    }
    sort(v.begin(), v.end());
}

int main()
{
    calc();
    fio;
    int n;
    cin >> n;
    cout << v[n - 1];
    return 0;
}

