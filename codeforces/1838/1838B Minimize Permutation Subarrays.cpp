/*
    author    : MishkatIT
    created   : Tuesday 2023-09-26-13.42.08
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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int posOf1 = find(v.begin(), v.end(), 1) - v.begin() + 1;
        int posOf2 = find(v.begin(), v.end(), 2) - v.begin() + 1;
        int posOfn = find(v.begin(), v.end(), n) - v.begin() + 1;
        if(max(posOf1, posOf2) < posOfn) {
          cout << posOfn << ' ' << max(posOf1, posOf2) << '\n';
        } else if(min(posOf1, posOf2) > posOfn) {
          cout << posOfn << ' ' << min(posOf1, posOf2) << '\n';
        } else {
          cout << "1 1\n";
        }
    }
    return 0;
}

