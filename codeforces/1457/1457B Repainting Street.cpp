/*
    author    : MishkatIT
    created   : Thursday 2023-05-18-22.57.26
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
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for (auto& i : v)
        {
            cin >> i;
        }
        int ans = 1e9;
        for (int i = 1; i <= 100; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                if(v[j] == i)continue;
                j += k - 1;
                temp++;
            }
            ans = min(ans, temp);
        }
        cout << ans << '\n';
    }
    return 0;
}
