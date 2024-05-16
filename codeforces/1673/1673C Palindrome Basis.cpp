/*
    Author    : MishkatIT
    Created   : Thursday 16-05-2024 18:15:16
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 4e4 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

bool isPalindrome(int x) {
    string str;
    str = to_string(x);
    bool ok = true;
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        ok &= (str[i] == str[n - i - 1]);
    }
    return ok;
}

vector<int> palindrome;
vector<int> dp(N);

void pre() {
    for (int i = 1; i < N; i++) {
        if (isPalindrome(i)) {
            palindrome.push_back(i);
        }
    }

    int n = palindrome.size();
    dp[0] = 1;
    for (int j = 0; j < n; j++) {
        for (int sum = 1; sum < N; sum++) {
            if (sum - palindrome[j] >= 0) {
                dp[sum] = (dp[sum] + dp[sum - palindrome[j]]) % mod;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre();

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}