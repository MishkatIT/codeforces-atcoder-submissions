/*
    author    : MishkatIT
    created   : Thursday 2023-08-31-20.33.32
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

bool check(int n)
{
    if(n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n; i++) {
        string a;
        a = str[i];
        for (int j = i + 1; j < n; j++) {
            string b;
            b = a + str[j];
            if(check(stoi(b))) {
                cout << b << '\n';
                return;
            }
            for (int k = j + 1; k < n; k++) {
                string c;
                c = b + str[k];
                if(check(stoi(c))) {
                    cout << c << '\n';
                    return;
                }
            }
        }
    }
    cout << -1 << '\n';
    return;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

