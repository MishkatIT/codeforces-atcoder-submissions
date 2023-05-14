/*
    author    : MishkatIT
    created   : Monday 2023-05-15-00.36.09
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
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
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if(v[i] != i)
            {
                if(ans == 0)
                    ans = abs(v[i] - i);
                else
                    ans = __gcd(ans, abs(v[i] - i));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
