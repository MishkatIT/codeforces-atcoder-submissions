/*
    author    : MishkatIT
    created   : Sunday 2023-10-01-14.18.26
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
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    for (int i = 2; i * i <= n; i++) {
        while(n % i == 0 && ans.size() < k - 1) {
            n /= i;
            ans.push_back(i);
        }
    }
    if (n > 1) ans.push_back(n);
    if(ans.size() == k) {
        for (auto& i : ans) {
            cout << i << ' ';
        }
    } else {
        cout << -1;
    }
    return 0;
}

