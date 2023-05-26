/*
    author    : MishkatIT
    created   : Friday 2023-05-26-19.55.49
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
        int n;
        cin >> n;
        vector<int>v(n + 10);
        int uni = 0;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(!v[x])uni++;
            v[x]++;
            mx = max(mx, v[x]);
        }
        if(mx == uni)mx--;
        cout << min(mx, uni) << '\n';
    }
    return 0;
}

