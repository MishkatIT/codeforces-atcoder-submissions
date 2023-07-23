/*
    author    : MishkatIT
    created   : Sunday 2023-07-23-20.23.55
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
    string a, b;
    cin >> a >> b;
    int i = 0, j = 0;
    int lena = a.length(), lenb = b.length();
    while(i < lena && a[i] == '0') i++;
    while(j < lenb && b[j] == '0') j++;
    if(lena - i > lenb - j) {
        cout << '>';
    } else if(lena - i < lenb - j) {
        cout << '<';
    } else {
        while(i < lena) {
            if(a[i] > b[j]) {
                cout << '>';
                return 0;
            } else if(a[i] < b[j]) {
                cout << '<';
                return 0;
            }
            i++, j++;
        }
        cout << '=';
    }
    return 0;
}

