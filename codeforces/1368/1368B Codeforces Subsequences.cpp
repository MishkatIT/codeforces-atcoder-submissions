/*
    author    : MishkatIT
    created   : Saturday 2023-10-28-23.00.13
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

vector<int> freq(10, 1);

ll mul()
{
    ll x = 1;
    for (auto& i: freq) {
        x *= i;
    }
    return x;
}

int main()
{
    fio;
    ll k;
    cin >> k;
    for (int i = 0; mul() < k; i++) {
        freq[i % 10]++;
    }
    string str = "codeforces";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < freq[i]; j++) {
            cout << str[i];
        }
    }
    return 0;
}

