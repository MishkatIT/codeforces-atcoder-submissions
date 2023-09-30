/*
    author    : MishkatIT
    created   : Saturday 2023-09-30-17.59.16
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
    string str;
    cin >> str;
    for (int i = 0; i + 2 < n; i++) {
      if(str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C') {
        cout << i + 1;
        return 0;
      }
    }
    cout << -1;
    return 0;
}
