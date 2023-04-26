/*
    author    : MishkatIT
    created   : Wednesday 2023-04-26-12.32.23
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
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
    sort(v.begin(), v.end());
    int ans = 0;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        if(v[i] >= x)
            ans++, x++;
    }
    cout << ans;
    return 0;
}

