/*
    author    : MishkatIT
    created   : Wednesday 2023-01-18-23.22.59
    problem   : E. Eating Queries
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long>v(n), sum(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        sum[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + v[i];
        }
        int temp;
        for (int i = 0; i < q; i++)
        {
            cin >> temp;
            if(temp > sum[n - 1])
                cout << -1 << '\n';
            else
                cout << lower_bound(sum.begin(), sum.end(), temp) - sum.begin() + 1 << '\n';
        }
    }
    return 0;
}

