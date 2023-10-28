/*
    author    : MishkatIT
    created   : Thursday 2023-08-03-00.18.38
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
    vector<int>v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int i = 0, j = 0;
    int mx = 0;
    while(j < n) {
        if(v[j] - v[i] <= 5) {
            mx = max(mx, j - i + 1);
            j++;
        } else {
            i++;
        }
    }
    cout << mx;
    return 0;
}

