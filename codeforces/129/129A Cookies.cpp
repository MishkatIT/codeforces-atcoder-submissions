/*
    author    : MishkatIT
    created   : Wednesday 2023-11-01-23.06.05
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
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int even = 0, odd = 0;
    for (auto& i : v) {
        even += (i % 2 == 0);
        odd += (i % 2);
    }
    if(odd & 1) {
        cout << odd;
    } else {
        cout << even;
    }
    return 0;
}

