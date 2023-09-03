/*
    author    : MishkatIT
    created   : Sunday 2023-09-03-20.58.11
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
        vector<int> pos(4, -1);
        int ans = inf;
        for (int i = 0; i < str.size(); i++) {
            pos[str[i] - '0'] = i;
            if(*min_element(pos.begin() + 1, pos.end()) != -1) {
                ans = min(ans, (*max_element(pos.begin() + 1, pos.end()) - (*min_element(pos.begin() + 1, pos.end())) + 1));
            }
        }
        if(ans == inf) ans = 0;
        cout << ans << '\n';
    }
    return 0;
}

