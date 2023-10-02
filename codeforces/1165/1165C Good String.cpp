/*
    author    : MishkatIT
    created   : Monday 2023-10-02-16.16.46
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
    int n;
    cin >> n;
    string str;
    cin >> str;
    string ans;
    ans += str.front();
    for (auto& i : str) {
        if(ans.size() % 2 == 0 || ans.back() != i) {
            ans += i;
        }
    }
    if(ans.size() & 1) {
        ans.pop_back();
    }
    cout << n - ans.size() << '\n';
    for (auto& i : ans) {
        cout << i;
    }
    return 0;
}
