/*
    author    : MishkatIT
    created   : Saturday 2023-03-04-03.35.57
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
        int a, b, c;
        cin >> a >> b >> c;
        double minimum = ((double)a + b + c) / (6 + 3); // every 7th shot deals 1 damage to all monsters.
        bool ok = true;
        if(minimum != (int)minimum)
            ok = false;
        if(min(a, min(b, c)) < minimum)
            ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
