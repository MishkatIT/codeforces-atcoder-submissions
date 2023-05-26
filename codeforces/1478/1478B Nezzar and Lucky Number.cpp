/*
    author    : MishkatIT
    created   : Friday 2023-05-26-17.34.52
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int q, d;

bool ok (int x)
{
    while(x)
    {
        if(x % 10 == d)
            return true;
        x /= 10;
    }
    return false;
}

bool possible(int x)
{
//  debug(x);
    if(ok(x))
        return true;
    if(x <= 0)
        return false;
    return possible(x - d);
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> q >> d;
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            cout << (possible(x)? "YES" : "NO") << '\n';
        }
    }
    return 0;
}

