/*
    author    : MishkatIT
    created   : Wednesday 2023-05-17-18.33.01
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
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 1;
        for (int l = i - 1; l >= 0; l--)
        {
            if(v[l] <= v[l + 1])
                temp++;
            else
                break;
        }
        for (int r = i + 1; r < n; r++)
        {
            if(v[r] <= v[r - 1])
                temp++;
            else
                break;
        }
        ans = max(ans, temp);
    }
    cout << ans << '\n';
    return 0;
}

