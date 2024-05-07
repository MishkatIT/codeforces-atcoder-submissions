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

int main()
{
    fio;
    string x = "AHIMOTUVWXY";
    string str;
    cin >> str;
    bool ok = true;
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        ok &= (str[i] == str[n - i - 1]);
    }
    for (auto& i : str) {
        ok &= (x.find(i) != string::npos);
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}