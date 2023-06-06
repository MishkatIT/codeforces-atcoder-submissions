/*
    author    : MishkatIT
    created   : Tuesday 2023-06-06-21.41.14
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 2e5 + 10;
int arr[N];
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = 0;
        int cnta = 0, cntb = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] <= q)
            {
                cnta++;
                if(cnta >= k)
                    cntb++;
                ans += cntb;
            }
            else
                cnta = 0, cntb = 0;
        }
        cout << ans << '\n';
    }
    return 0;
}
