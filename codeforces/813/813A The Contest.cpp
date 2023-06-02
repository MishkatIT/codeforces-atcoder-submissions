/*
    author    : MishkatIT
    created   : Friday 2023-06-02-20.39.52
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    int m;
    cin >> m;
    const int N = 1e5 + 10;
    vector<bool> v(N);
    for(int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            v[j] = true;
        }
    }
    int ans = -1;
    for (int i = sum; i < N; i++)
    {
        if(v[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}

