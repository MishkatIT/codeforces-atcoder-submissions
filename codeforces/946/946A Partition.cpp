/*
    author    : MishkatIT
    created   : Thursday 2023-09-07-20.03.52
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
    int sum = 0;
    while(n--) {
        int x;
        cin >> x;
        sum += abs(x);
    }
    cout << sum;
    return 0;
}
