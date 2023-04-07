/*
    author    : MishkatIT
    created   : Saturday 2023-04-08-02.04.46
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
const int mod = 1e9 + 7;
const int N = 1e5 + 10;
using namespace std;
vector<int> fact(N);
void pre(void)
{
    fact [0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % mod;
    }
}

int main()
{
    fio;
    pre();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = (n * 1LL * (n - 1)) % mod;
        ans = (ans * 1LL * fact[n]) % mod;
        cout << ans << '\n';
    }
    return 0;
}
