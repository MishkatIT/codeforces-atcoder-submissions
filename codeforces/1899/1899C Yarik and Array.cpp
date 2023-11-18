/*
    author    : MishkatIT
    created   : Saturday 2023-11-18-18.25.17
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

int maxSubArraySum(vector<int>& v, int l, int r) // solving by using Kadane's Algo...
{
    int sum = 0;
    int mxSum = v[l];
    while(l <= r) {
        sum += v[l];
        mxSum = max(mxSum, sum);
        sum = max(0, sum);
        l++;
    }
    return mxSum;
}


int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }

        bool toogle = (v.front() & 1);
        int ans = v.front(), j = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, v[i]);
            if ((v[i] & 1) == toogle)
            {
                toogle ^= 1;
            } else {
                ans = max (ans, maxSubArraySum(v, j, i - 1));
                j = i;
                i--;
                toogle = (v[j] & 1);
            }
        }
        ans = max (ans, maxSubArraySum(v, j, n - 1));
        cout << ans << '\n';
    }
    return 0;
}


