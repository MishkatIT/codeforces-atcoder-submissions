/*
    author    : MishkatIT
    created   : Tuesday 2024-01-02-18.20.22
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (auto& i : a) {
        cin >> i;
    }
    for (auto& i : b) {
        cin >> i;
    }
    int sum = 0;
    int mx = 0;
    for (int i = 0, j = 0; i < n; i++) {
        if (i >= k) {
            while(j <= i - k) {
                if (b[j] == 0) {
                    sum -= a[j];
                }
                j++;
            }
        }
        if (b[i] == 0) {
            sum += a[i];
        }
        mx = max(sum, mx);

    }
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) {
            mx += a[i];
        }
    }
    cout << mx << '\n';
    return 0;
}


