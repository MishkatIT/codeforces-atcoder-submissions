/*
    author    : MishkatIT
    created   : Friday 2023-08-04-00.16.32
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
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector<int> temp(m);
        for (auto& i: temp) {
            cin >> i;
        }
        reverse(temp.begin(), temp.end());
        for (auto& i: temp) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}