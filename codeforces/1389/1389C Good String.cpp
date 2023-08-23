/*
    author    : MishkatIT
    created   : Wednesday 2023-08-23-21.19.56
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
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
        int ans = 0;
        int N = 10;
        int n = str.length();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int tempAns = 0;
                for (int k = 0; k < n; k++) {
                    if(tempAns & 1) {           // to avoid this: 23232525 -> 22255 (assuming, i == 2, j = 5) (correct: 2525) (0, 5, 6, 7)th index.
                        if (str[k] - '0' == j) {
                            tempAns++;
                        }
                    } else {
                        if(str[k] - '0' == i) {
                            tempAns++;
                        }
                    }
                }
                if(i == j) {                  // actually, checked 1 number.
                    ans = max(ans, tempAns);
                } else {
                    tempAns -= (tempAns & 1);    // checked two numbers, even length required.
                    ans = max(ans, tempAns);
                }
            }
        }
        cout << n - ans << '\n';
    }
    return 0;
}

