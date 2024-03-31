/*
    author    : MishkatIT
    created   : Monday 2024-04-01-03.38.35
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

int operations(vector<int>&a, vector<int>&b)
{
    int op = 0, n = a.size();
    int ita = 0, itb = 0;
    while(ita < n && itb < n) {
        if (a[ita] < b[itb]) {
            ita++, itb++;
        } else {
            itb++;
            op++;
        }
    }
    return op;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);
        a[0] = 1;
        for (int i = 1; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll op = operations(a, b);
        int low = 0, high = m;
        int x = a.front();
        int cur = m + 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            a.erase(find(a.begin(), a.end(), x));
            a.push_back(mid);
            x = mid;
            sort(a.begin(), a.end());
            int temp = operations(a, b);
            if (temp <= op) {
                low = mid + 1;
            } else {
                high = mid - 1;
                cur = mid;
            }
        }
        cout << op * m + (m - cur + 1) << '\n';
    }
    return 0;
}


