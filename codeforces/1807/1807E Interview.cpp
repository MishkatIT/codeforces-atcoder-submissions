/*
    author    : MishkatIT
    created   : Monday 2023-03-20-17.05.39
    Gonna solve my first interactive problem (:
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
//    fio;
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
        int low = 1;
        int high = n;
        int ans;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(low == high)
            {
                ans = mid;
                break;
            }
            int len = mid - low + 1;
            int tsum = 0;
            cout << '?' << ' ' << len << ' ';
            for (int i = low; i <= mid; i++)
            {
                cout << i << ' ';
                tsum += v[i];
            }
            cout << '\n';
            fflush(stdout);
            int response;
            cin >> response;
            if(response > tsum)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << '!' << ' ' << ans << '\n';
        fflush(stdout);
    }
    return 0;
}

