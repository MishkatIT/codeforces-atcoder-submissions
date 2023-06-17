/*
    author    : MishkatIT
    created   : Saturday 2023-06-17-02.01.27
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
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    bool ok = false;
    for (int i = 0; i < n * m; i++)
    {
        char x;
        cin >> x;
        if(x != 'W' && x != 'B'&& x!= 'G')
            ok = true;
    }
    cout << (ok ? "#Color" : "#Black&White") << '\n';
    return 0;
}

