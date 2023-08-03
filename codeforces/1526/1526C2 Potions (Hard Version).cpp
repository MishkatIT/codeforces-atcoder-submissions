/*
    author    : MishkatIT
    created   : Thursday 2023-08-03-14.08.15
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
    int cnt = 0;
    ll sum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        pq.push(x);
        cnt++;
        while(sum < 0) {
            sum -= pq.top();
            pq.pop();
            cnt--;
        }
    }
    cout << cnt;
}

