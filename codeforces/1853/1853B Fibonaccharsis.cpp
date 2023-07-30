/*
    author    : MishkatIT
    created   : Sunday 2023-07-30-12.41.19
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
//        if(k > 28) {
//            cout << 0 << '\n';
//            continue;
//        }
        int ans = 0;
        for (int i = n; i >= 0; i--) {
            bool ok = true;
            int a = n;
            int b = i;
            for (int j = 0; j < k - 2; j++) {
                int x = a - b;
                a = b;
                b = x;
                if(b < 0 || b > a) {
                    ok = false;
                    break;
                }
            }
            ans += ok;
        }
        cout << ans << '\n';
    }
    return 0;
}

