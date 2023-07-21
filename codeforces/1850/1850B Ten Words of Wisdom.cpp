/*
    author    : MishkatIT
    created   : Friday 2023-07-21-20.39.46
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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int, greater<int>> mp;
        map<int, int> idx;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            mp[b] = a;
            idx[b] = i + 1;
        }
//        for (auto i: idx)
//                cout << i.first << ' ' << i.second << '\n';
        int ans;
        for(auto& i: mp) {
            if(i.second <= 10) {
                ans = idx[i.first];
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

