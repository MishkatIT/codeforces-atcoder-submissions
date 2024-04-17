/*
    author    : MishkatIT
    created   : Wednesday 2024-04-17-13.36.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<long long> ans(n);
        long long x = b / n;
        long long rem = b % n;
        for (int i = 0; i < n; i++) {
            long long cur = x;
            if (rem > 0) cur += 1;
            rem--;
            ans[i] = cur * k;
            s -= cur * k;
        }
        int i = 0;
        while(s > 0 && i < n) {
            ans[i] += min(s, k - 1);
            s -= min(s, k - 1);
            i++;
        }
        long long bb = 0;
        for (int i = 0; i < n; i++) {
            bb += (ans[i] / k);
        }

        if (s !=0 || bb != b) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " \n"[i == n - 1];
            }
        }
    }

    return 0;
}

