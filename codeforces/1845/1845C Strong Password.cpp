/*
    author    : MishkatIT
    created   : Sunday 2023-10-01-03.26.59
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
        string str;
        cin >> str;
        int m;
        cin >> m;
        string a, b;
        cin >> a >> b;
        int n = str.length();
        int mx = -1;
        for (int i = 0; i < m; i++) {
            int last = mx;
            for (char c = a[i]; c <= b[i]; c++) {
                int temp = n;
                for (int j = mx + 1; j < n; j++) {
                    if(str[j] == c) {
                        temp = j;
                        break;
                    }
                }
                last = max(last, temp);
            }
            mx = last;
        }
        cout << (mx == n ? "YES" : "NO") << '\n';
    }
    return 0;
}
