/*
    author    : MishkatIT
    created   : Monday 2024-01-22-23.12.15
*/

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
    string str;
    cin >> str;
    int n = str.length();
    if (count(str.begin(), str.end(), 'a') == n) {
        str.back() = 'z';
        cout << str;
        return 0;
    }
    int l = 0;
    while(l < n && str[l] == 'a')l++;
    l = min(l, n - 1);
    int r = l;
    while(r < n && str[r] != 'a') r++;
    r--;
    while(r >= l) {
        --str[r--];
    }
    cout << str;
    return 0;
}


