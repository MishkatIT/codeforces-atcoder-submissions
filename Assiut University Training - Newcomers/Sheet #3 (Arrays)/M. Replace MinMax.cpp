/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-02.42.57
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
    vector<int>v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int posOfMin = -1;
    int posOfMax = -1;
    int mn = 1e6;
    int mx = -1e6;
    for (int i = 0; i < n; i++) {
        if(v[i] <= mn) {
            mn = v[i];
            posOfMin = i;
        }
        if(v[i] >= mx) {
            mx = v[i];
            posOfMax = i;
        }
    }
    swap(v[posOfMin], v[posOfMax]);
    for(auto  &i : v) {
        cout << i << ' ';
    }
    return 0;
}