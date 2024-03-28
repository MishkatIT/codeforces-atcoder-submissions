/*
    author    : MishkatIT
    created   : Friday 2024-03-29-03.29.50
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll inf    = 1e9;
const ll linf   = 1e18;

const int N = 100005;
bool dp[N];

bool check(int n) {
    while(n) {
        int d = n % 10;
        if(d > 1) return false;
        n /= 10;
    }
    return true;
}

void pre() {
    memset(dp, false, sizeof(dp));
    dp[1] = true;
    for(int i = 2; i < N; i++) {
        if(check(i)) dp[i] = true;
        else {
            for(int j = 1; j * j <= i; j++) {
                if(i % j == 0 && (dp[j] && dp[i / j])) {
                    dp[i] = true;
                    break;
                }
            }
        }
    }
}

int main() {
    fio;
    pre();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (dp[n] ? "YES" : "NO") << '\n';
    }
    return 0;
}

