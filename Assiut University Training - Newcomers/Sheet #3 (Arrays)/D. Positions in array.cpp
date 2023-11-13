/*
    author    : MishkatIT
    created   : Saturday 2023-08-05-17.16.32
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
    vector<int>v(n);
    for (auto& i : v) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
      if(v[i] <= 10) {
        cout << "A[" << i << "] = " << v[i] << '\n';
      }
    }
    return 0;
}