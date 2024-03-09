/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-17.56.54
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
    string str;
    cin >> str;
    int i;
    for (i = 0; ; i++) {
        if (str[i] == '|') break;
        cout << str[i];
    }
    i++;
    while(str[i] != '|') i++;
    for (i++; i < str.size(); i++) {
        cout << str[i];
    }
    return 0;
}

