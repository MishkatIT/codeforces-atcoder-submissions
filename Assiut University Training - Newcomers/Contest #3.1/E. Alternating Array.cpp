/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-19.30.24
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

int check(vector<int>& v, int sign) // receiving the vector by reference to reduce memory usage. (use '&' sign)
{
    int cnt = 0;
    for (auto& i: v) {
        if(sign < 0 && i > 0) cnt++;
        if(sign > 0 && i < 0) cnt++;
        sign *= -1;
    }
    return cnt;
}

int main()
{
    fio;
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto& i : v) {
        cin >> i;
    }
    cout << min(check(v, 1), check(v, -1)); // checking twice.
                                                  // 1 -> starting with '+'
                                                  // 2 -> starting with '-'
    return 0;
}