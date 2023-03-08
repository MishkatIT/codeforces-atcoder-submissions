/*
    author    : MishkatIT
    created   : Wednesday 2023-03-08-21.45.10
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
void LesGo (void)
{
    int n;
    cin >> n;
    vector<int>v (n + 2);
    for (int i = 0; i < n + 2; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long sum = accumulate(v.begin(), v.begin() + n, 0LL);
//        debug(sum); debug(v[n]); debug(v[n + 1]);
    if(sum == v[n + 1] || sum == v[n])
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " \n"[i == n - 1];
        return;
    }
    sum += v[n];
    for (int i = 0; i < n + 1; i++)
    {
        sum -= v[i];
        if(sum == v[n + 1])
        {
            for(int j = 0; j < n + 1; j++)
            {
                if(j != i)
                {
                    cout << v[j] << " \n"[j == n];
                }
            }
            return;
        }
        sum += v[i];
    }
    cout << -1 << '\n';
    return;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        LesGo();
    return 0;
}
