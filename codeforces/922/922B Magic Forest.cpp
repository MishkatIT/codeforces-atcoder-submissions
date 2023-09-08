/*
    author    : MishkatIT
    created   : Friday 2023-09-08-23.17.51
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
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int k = i ^ j;
            if(i + j > k) {             //for non-degenerate triangle
                if(k >= j && k <= n) {  // the third number should be equal to i ^ j, also should on the range j to n.
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
