/*
    author    : MishkatIT
    created   : Tuesday 2023-10-10-16.23.11
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
        ll n = str.length();
        ll pos;
        cin >> pos;
        ll seg = inf;
        ll low = 0LL, high = n;

        while(low <= high) {
            ll mid = low + (high - low) / 2LL;
            ll sum = mid * (2LL * n - mid + 1LL) / 2LL; // n / 2 * (2a + (n - 1)d)
            if(sum < pos) {
                low = mid + 1LL;
            } else {
                seg = mid;
                high = mid - 1LL;
            }
        }
        string temp;
        temp += str.front();
        seg--;
        pos -= seg * (2LL * n - seg + 1) / 2LL;

        ll l = 1;
        while(seg--) {
            while(l < n) {
                if(str[l] < temp.back()) {
                    temp.pop_back();
                    break;
                } else {
                    temp += str[l];
                }
                l++;
            }
        }
        while(l < n) {
            temp += str[l++];
        }

        cout << temp[--pos];
    }
    return 0;
}

