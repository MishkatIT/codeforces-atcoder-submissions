/*
    author    : MishkatIT
    created   : Tuesday 2024-03-05-22.20.26
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll x = 0;
        for (int i = 0; i < 60; i++) {
            ll bit_a = (a >> i) & 1;
            ll bit_b = (b >> i) & 1;

            if (bit_a == 1 && bit_b == 0) {
                x |= (1LL << i);
            } else if (bit_a == 0 && bit_b == 1) {
                x = -1;
                break;
            }
        }
        cout << x << '\n';
    }

    return 0;
}
