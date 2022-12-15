/*
    author    : MishkatIT
    created   : Thursday 2022-12-15-20.41.20
    problem   : A. Divide and Conquer
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if(sum % 2 == 0)
        {
            cout << 0 << '\n';
            continue;
        }
        int ans = 1e18;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            if(v[i] % 2 != 0)
                while(v[i] % 2 != 0)
                {
                    v[i] /= 2;
                    cnt++;
                }
            else
                while(v[i] % 2 == 0 && v[i] > 0)
                {
                    v[i] /= 2;
                    cnt++;
                }
            ans = min(ans, cnt);
        }
        cout << ans << '\n';
    }
    return 0;
}
