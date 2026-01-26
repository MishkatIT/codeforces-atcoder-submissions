/*
    author    : MishkatIT
    created   : Thursday 2023-05-04-00.21.37
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        bool ok = false;
        while(a > 0 && b > 0)
        {
            if((a & 1) & (b & 1))
            {
                ok = true;
                break;
            }
            a >>= 1;
            b >>= 1;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}