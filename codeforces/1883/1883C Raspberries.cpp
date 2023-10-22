/*
    author    : MishkatIT
    created   : Sunday 2023-10-22-17.38.20
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll mn = 1e9;
        int two = 0;
        if(k ==  4) {
            for (auto& i: v) {
                while(i % 2 == 0) {
                    two++;
                    i /= 2;
                }
            }
            if(two >= 2) {
                mn = 0;
            } else if(two == 1) {
                mn = 1;
            } else {
                mn = 2;
            }
        }

        ll m = 1;

        for (auto & i: v) {
            if(i % k == 0) {
                mn = 0;
            } else {
                i %= k;
                mn = min(mn, k - i);
            }
        }

        cout << mn << '\n';
    }

    return 0;
}

