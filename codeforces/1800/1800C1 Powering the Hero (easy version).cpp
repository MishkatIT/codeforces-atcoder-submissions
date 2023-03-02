/*
    author    : MishkatIT
    created   : Thursday 2023-03-02-21.18.54
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] != 0)
                pq.push(arr[i]);
            else
            {
                if(!pq.empty())
                {
                    int t = pq.top();
                    ans += t;
                    pq.pop();
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
