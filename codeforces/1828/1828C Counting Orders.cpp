/*
    author    : MishkatIT
    created   : Monday 2023-05-15-19.40.31
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
        vector<int>a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int x = -1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] <= b[i])
            {
                x = 0;
                cout << x << '\n';
                break;
            }
        }
        if(x == 0) continue;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            int low = i, high = n - 1, pos;
            while(low <= high)
            {
                int mid = low + (high - low) / 2;
                if(a[i] > b[mid])
                    pos = mid, low = mid + 1;
                else
                    high = mid - 1;
            }
            ans = (ans * 1LL * (pos - i + 1)) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}

