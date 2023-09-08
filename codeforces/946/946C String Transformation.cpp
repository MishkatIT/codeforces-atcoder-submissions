/*
    author    : MishkatIT
    created   : Friday 2023-09-08-20.11.16
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
    char c = 'a';
    int cnt = 0;
    for (auto& i: str) {
        if(i <= c) {
            i = c;
            c++;
            cnt++;
            if(cnt == 26)break;
        }
    }

    if(cnt == 26) {
        cout << str;
    } else {
        cout << -1;
    }
    return 0;
}
