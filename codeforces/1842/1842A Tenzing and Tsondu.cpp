/*
    author    : MishkatIT
    created   : Saturday 2023-06-24-20.56.13
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
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            sum -= x;
        }

        if(sum > 0)
            cout << "Tsondu" << '\n';
        else if(sum < 0)
            cout << "Tenzing" << '\n';
        else
            cout << "Draw" << '\n';
    }
    return 0;
}

