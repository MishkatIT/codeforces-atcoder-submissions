/*
    author    : MishkatIT
    created   : Friday 2023-09-01-01.55.52
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
        int k, n;
        cin >> k >> n;
        int now = 1;
        int gap = n - k;;
        for (int i = 0; i < k; i++) {
            cout << now << ' ';
            now++;
            if(gap >= (i + 1)) {
                now += (i + 1);
                gap -= (i + 1);
            }
        }
        cout << '\n';
    }
    return 0;
}

