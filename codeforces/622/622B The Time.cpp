/*
    author    : MishkatIT
    created   : Wednesday 2023-11-15-23.47.58
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

    ll ex = 24 * 60;
    string str;
    cin >> str;
    int hh = (str[0] - '0') * 10 + (str[1] - '0');
    int mm = (str[3] - '0') * 10 + (str[4] - '0');
    ll m;
    cin >> m;
    m %= ex;
    hh += (m / 60);
    hh %= 24;
    mm += (m % 60);
    if (mm >= 60) {
        hh++;
        mm %= 60;
    }
    hh %= 24;
    if (hh < 10) cout << 0;
    cout << hh << ":";
    if(mm < 10) cout << 0;
    cout << mm;
}



