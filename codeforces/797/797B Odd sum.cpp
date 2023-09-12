/*
    author    : MishkatIT
    created   : Wednesday 2023-09-13-01.10.17
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
    int n;
    cin >> n;
    priority_queue<int> all;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        all.push(-abs(x));
        if(x > 0) sum += x;
    }
    if(sum & 1) {
        cout << sum;
        return 0;
    }
    while(!all.empty()) {
        if((sum + all.top()) & 1) {
            cout << sum + all.top();
            return 0;
        }
        all.pop();
    }
    return 0;
}

