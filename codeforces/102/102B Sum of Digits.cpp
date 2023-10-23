/*
    author    : MishkatIT
    created   : Monday 2023-10-23-22.13.27
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
    string str;
    cin >> str;
    int ans = 0;
    while(str.size() > 1) {
        ans++;
        int temp = 0;
        for (int i = 0; i < str.size(); i++) {
            temp += (str[i] - '0');
        }
        str = to_string(temp);
    }
    cout << ans;
    return 0;
}

