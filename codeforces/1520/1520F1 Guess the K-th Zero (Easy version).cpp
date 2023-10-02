/*
    author    : MishkatIT
    created   : Wednesday 2023-08-30-17.49.32
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
    int n, t, k;
    cin >> n >> t >> k;
    int low = 1, high = n;
    int pos = -1;
    auto query = [&](int mid) {
        cout << "? 1 " << mid << endl;
    };
    while(low <= high) {
        int mid = low + (high - low) / 2;
        query(mid);
        int response;
        cin >> response;
        if(response > mid - k) {
            low = mid + 1;
        } else {
            pos = mid;
            high = mid - 1;
        }
    }
    cout << "! " << pos << endl;
    return 0;
}
