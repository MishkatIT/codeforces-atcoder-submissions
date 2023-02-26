/*
    author    : MishkatIT
    created   : Monday 2023-02-27-00.48.55
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
        long long n, m;
        cin >> n >> m;
        vector<long long> arr(n), extra(n + m + 10, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            extra[arr[i]] = m + 1;
        }
        long long ans = n * m *(m + 1); // 2n * (m * (m + 1) / 2)
        long long p, v;
        for (int i = 0; i < m; i++)
        {
            cin >> p >> v;
            p--;
            if(arr[p] != v)
            {
                extra[arr[p]] -= (m - i);
                extra[v] += (m - i);
                arr[p] = v;
            }
        }
        for (int i = 0; i <= n + m; i++)
        {
            ans -=((extra[i] * (extra[i] - 1)) / 2);
        }
        cout << ans << '\n';
    }
    return 0;
}
