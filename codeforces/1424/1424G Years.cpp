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
    vector<array<int, 2>> range(2 * n);
    for (int i = 0; i < 2 * n; i += 2) {
        cin >> range[i][0] >> range[i + 1][0];
        range[i][1] = 1;
        range[i + 1][1] = -1;
    }
    sort(range.begin(), range.end());
    int year = -1, mx = -1;
    int sum = 0;
    for (auto& i : range) {
        sum += i[1];
        if (sum > mx) {
            mx = sum;
            year = i[0];
        }
    }
    cout << year << ' ' << mx;
    return 0;
}


