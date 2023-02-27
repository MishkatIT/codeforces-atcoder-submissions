/*
    author    : MishkatIT
    created   : Tuesday 2023-02-28-01.47.47
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, m = (int)1e5 + 10;
    cin >> n;
    vector<long long> freq(m, 0), dp(m, 0);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        freq[temp]++;
    }
    dp[0] = 0;
    dp[1] = freq[1];
    for (int i = 2; i < m; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
    }
    cout << dp[m - 1];
    return 0;
}

