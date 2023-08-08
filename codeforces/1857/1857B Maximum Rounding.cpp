/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-20.42.06
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
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        str = '0' + str;
        int n = str.length();
        vector<bool> changed(N);
        for (int i = n - 1; i >= 0; i--) {
            if(str[i] == '9') {
                while(str[i] == '9') {
                    i--;
                }
                changed[i + 1] = true;
                str[i]++;
                i++;
            } else {
                if(str[i] >= '5') {
                    changed[i] = true;
                    str[i - 1]++;
                }
            }
        }
        int i = 0;
        if(str.front() == '0') i++;
        for (; i < n; i++) {
            if(changed[i]) {
                cout << string((n - i), '0');
                break;
            }
            cout << str[i];
        }
        cout << '\n';
    }
    return 0;
}

