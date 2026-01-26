/*
    author    : MishkatIT
    created   : Friday 2023-08-04-00.38.33
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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto& i: a) {
        cin >> i;
    }
    for (auto& i: b) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a != b) {
        cout << "no";
    } else {
        cout << "yes";
    }
    return 0;
}