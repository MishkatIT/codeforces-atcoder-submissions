/*
    author    : MishkatIT
    created   : Thursday 2023-08-10-00.58.56
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
        string str;
        cin >> str;
        int ans = 0;
        set<char> s;
        for (auto& i: str) {
            s.insert(i);
            if(s.size() > 3) {
                s.clear();
                ans++;
            }
            s.insert(i);
        }
        cout << ans + ((int)s.size() > 0) << '\n';
    }
    return 0;
}

