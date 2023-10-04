/*
    author    : MishkatIT
    created   : Wednesday 2023-10-04-23.08.35
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
    vector<int> v(n + 5);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 1; i <= n;) {
        if(v[i] == i) {
            ans++;
            i++;
        } else {
            int x = i;
            int y = v[i];
            while(x < y) {
                x++;
                i++;
                if(v[x] > y) {
                    y = v[x];
                }
            }
        }
    }
    cout << ans;
    return 0;
}
