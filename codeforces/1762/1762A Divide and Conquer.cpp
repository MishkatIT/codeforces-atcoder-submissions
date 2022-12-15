/*
    author    : MishkatIT
    created   : Thursday 2022-12-15-20.41.20
    problem   : A. Divide and Conquer
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a;
        vector<int> odd, even ;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a & 1)
            {
                odd.push_back(a);
            }
            else
            {
                even.push_back(a);
            }
        }
        if(!(odd.size() & 1))
        {
            cout << 0 << '\n';
            continue;
        }
        int ans = (int)1e9;
        for (int i = 0; i < odd.size(); i++)
        {
            int cnt = 0;
            while(odd[i] % 2 != 0)
            {
                odd[i] /= 2;
                cnt++;
            }
            if(cnt)
                ans = min(ans, cnt);
        }
        for (int i = 0; i < even.size(); i++)
        {
            int cnt = 0;
            while(even[i] % 2 == 0)
            {
                even[i] /= 2;
                cnt++;
            }
            if(cnt)
                ans = min(ans, cnt);
        }
        cout << ans << '\n';
    }
    return 0;
}
