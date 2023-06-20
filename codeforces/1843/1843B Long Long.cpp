/*
    author    : MishkatIT
    created   : Tuesday 2023-06-20-20.44.04
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
        vector<int>v(n);
        ll sum = 0;
        for (auto& i : v)
        {
            cin >> i;
            sum += abs(i);
        }
        int cnt = 0;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0)continue;
            if(v[i] <= 0)
                x++;
            else
            {
                if(x > 0)
                {
                    x = 0;
                    cnt++;
                }
            }
        }
        if(x > 0)cnt++;
        cout << sum << ' ' << cnt << '\n';
    }
    return 0;
}

