/*
    author    : MishkatIT
    created   : Saturday 2023-08-05-17.29.30
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto& x: a) {
        cin >> x;
    }
    vector<int> b(m);
    for (auto& x: b) {
        cin >> x;
    }
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            j++;
        }
        i++;
    }
    if(j != m) {
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
    }
    return 0;
}