/*
    author    : MishkatIT
    created   : Monday 2023-10-02-16.16.46
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
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<bool> bad(N);
    int l = 0, r = 1;
    int toRemove = 0;
    while(r < n) {
        if(str[l] == str[r]) {
            bad[r] = true;
            r++;
            toRemove++;
        } else {
            l = r + 1;
            r = l + 1;
        }
    }
    if((n - toRemove) & 1) {
        toRemove++;
        for (int i = n - 1; i >= 0; i--) {
            if(!bad[i]) {
                bad[i] = true;
                break;
            }
        }
    }
    cout << toRemove << '\n';
    for (int i = 0; i < n; i++) {
        if(!bad[i]) {
            cout << str[i];
        }
    }
    return 0;
}
