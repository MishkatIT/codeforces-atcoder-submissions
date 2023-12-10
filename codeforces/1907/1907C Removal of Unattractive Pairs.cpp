/*
    author    : MishkatIT
    created   : Sunday 2023-12-10-23.48.57
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int mxOccur = 0;
        vector<int> freq(26);
        for (auto& i : str) {
            freq[i - 'a']++;
            mxOccur = max(mxOccur, freq[i - 'a']);
        }
        if (mxOccur > n / 2) {
            cout << mxOccur - (n - mxOccur) << '\n';
        } else {
            cout << (n & 1) << '\n';
        }
    }
    return 0;
}


