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
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        double n;
        cin >> n;
        double sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        double avg = sum / n;
        double req = avg * 2;
        double temp = (n - 2) * avg;
        if(temp != (ll)temp) {
            cout << 0 << '\n';
            continue;
        }

        unordered_map<int, int> mp;
        for(auto& i: v) {
            if(i <= req) {
                mp[i]++;
            }
        }
        int ans = 0;
        for(auto& i: v) {
            if(i <= req) {
                int need = req - i;
                if(mp.count(need)) {
                    ans += mp[need];
                    if(need == i) {
                        ans--; // to avoid counting the element with itself
                    }
                }
            }
        }
        ans /= 2; // each pair is counted twice, so divide by 2 to get the correct count
        cout << ans << '\n';
    }
    return 0;
}
