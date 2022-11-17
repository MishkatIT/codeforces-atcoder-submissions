/*
    author    : MishkatIT
    created   : Thursday 2022-11-17-22.47.34
    problem   : 433 B. Kuriyama Mirai's Stones
*/
#include<iostream>
#include<vector>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int n;
    cin >> n;
    vector<int>v(n), psum(1, 0), sortedPsum(1, 0);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        psum.push_back(psum.back() + v[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        sortedPsum.push_back(sortedPsum.back() + v[i]);
    }
    int m;
    cin >> m;
    while(m--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if(t == 1)
            cout << psum[r] - psum[l - 1] << '\n';
        else
            cout << sortedPsum[r] - sortedPsum[l - 1] << '\n';
    }

    return 0;
}



