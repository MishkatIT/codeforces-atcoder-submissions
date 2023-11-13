/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-18.54.35
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
    // iterative approach.
    int n;
    cin >> n;
    long long fib[55];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n];
    return 0;
}






/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-18.54.35
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
long long dp[55];
long long fib (long long n)
{
    dp[1] = 0;
    dp[2] = 1;
    if(dp[n] != -1) {
        return dp[n];
    }
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    fio;
    // recursive approach.
    //Time limit will be exceeded in this approach.
    //We're adding DP here to refrain from the redundant calls.
    memset(dp, -1, sizeof dp);
    long long n;
    cin >> n;
    cout << fib(n);
    return 0;
}