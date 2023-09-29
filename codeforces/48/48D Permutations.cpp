/*
    author    : MishkatIT
    created   : Friday 2023-09-29-14.56.52
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
    vector<int> v(n), freq(N, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }
    int r = N - 1;
    while(!freq[r]) {
        r--;
    }
    int ans = inf;
    for (; r > 1; r--) {
        if(freq[r - 1] < freq[r]) {
            ans = -1;
            break;
        }
    }
    if(ans == -1) {
        cout << ans;
        return 0;
    }
    map<int, int> mp;
    cout << freq[1] << '\n';
    for (auto& i : v) {
        mp[i]++;
        cout << mp[i] << ' ';
    }
    return 0;
}

