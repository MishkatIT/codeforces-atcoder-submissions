/*
    author    : MishkatIT
    created   : Monday 2024-01-01-19.36.03
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
    int n;
    cin >> n;
    map<int, int> range;
    for (int i = 0; i < n; i++) {
        int b, d;
        cin >> b >> d;
        range[b]++;
        range[d]--;
    }
    int year = -1, mx = -1;
    int sum = 0;
    for (auto& i : range) {
        sum += i.second;
        if (sum > mx) {
            mx = sum;
            year = i.first;
        }
    }
    cout << year << ' ' << mx;
    return 0;
}


