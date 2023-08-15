/*
    author    : MishkatIT
    created   : Wednesday 2023-08-16-00.47.24
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
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        vector<int> freq(10);
        char mn = str.back();
        for (int i = str.length() - 1; i >= 0; i--) {
            int x = str[i] - '0';
            if(str[i] > mn) {
                x++;
            } else {
                mn = min(mn, str[i]);
            }
            freq[min(x, 9)]++;
        }
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < freq[i]; j++) {
                cout << i;
            }
        }
        cout << '\n';
    }
    return 0;
}

