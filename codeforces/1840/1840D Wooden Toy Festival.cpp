/*
    author    : MishkatIT
    created   : Wednesday 2023-06-07-17.23.06
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e15;

bool possible(vector<int>&v, int n, ll mid)
{
    int workers = 1;
    for (int x = 0, y = 0; y < n;)
    {
        if(v[y] <= (v[x] + mid + mid))y++;
        else
        {
            workers++;
            x = y;
            y = x;
            if(workers > 3) return false;
        }

    }
    return true;
}


int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int low = 0, high = inf;
        int ans;
        while(low <= high)
        {
            int mid = low + (high - low) / 2; // difference actually
            if(possible(v, n, mid))
            {
                ans = mid;
                high = mid - 1LL;
            }
            else
            {
                low = mid + 1LL;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
