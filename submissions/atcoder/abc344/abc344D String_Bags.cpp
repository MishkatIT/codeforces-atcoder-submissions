/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-18.40.17
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main() {
    string T;
    cin >> T;

    int N;
    cin >> N;

    vector<vector<string>> bags(N);
    vector<int> costs(N);

    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        costs[i] = 1; // Each selection has a cost of 1 yen
        bags[i].resize(A);
        for (int j = 0; j < A; ++j) {
            cin >> bags[i][j];
        }
    }

    vector<int> dp(T.size() + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = T.size(); j >= 0; --j) {
            for (const string& s : bags[i]) {
                int len = s.size();
                if (j + len <= T.size() && dp[j] != INT_MAX) {
                    bool match = true;
                    for (int k = 0; k < len; ++k) {
                        if (T[j + k] != s[k]) {
                            match = false;
                            break;
                        }
                    }
                    if (match) {
                        dp[j + len] = min(dp[j + len], dp[j] + costs[i]);
                    }
                }
            }
        }
    }

    int result = (dp[T.size()] == INT_MAX) ? -1 : dp[T.size()];
    cout << result << '\n';

    return 0;
}
