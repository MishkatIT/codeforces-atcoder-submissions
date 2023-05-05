/*
    author    : MishkatIT
    created   : Friday 2023-05-05-21.14.45
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
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int ans = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if(v[i] != v[n - 1 - i])
            {
                int x = abs(v[i] - v[n - 1 - i]);
                if(i > 0)
                {
                    ans = __gcd(ans, x);
                }
                else ans = x;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

