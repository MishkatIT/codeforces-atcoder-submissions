/*
    author    : MishkatIT
    created   : Sunday 2023-10-08-17.16.04
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
    int n, k;
    cin >> n >> k;
    string ans;
    for (int i = 0; i < k; i++) {
        for (int j = i; j < k; j++) {
            ans.push_back(char('a' + j));
            ans.push_back(char('a' + i));
        }
        ans.pop_back();
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i % (k * k)];
    }
    return 0;
}

