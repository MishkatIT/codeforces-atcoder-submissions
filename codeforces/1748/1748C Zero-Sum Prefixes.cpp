/*
    author    : MishkatIT
    created   : Sunday 2022-11-20-16.26.06
    problem   : 1748 C. Zero-Sum Prefixes
*/
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        vector<long long> psum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            psum[i + 1] = psum[i] + arr[i];
        }
//        for (auto i: psum)
//            cout << i << ' ' ;
        map<long long, int> mp;
        int mx = 0;
        int ans = 0;
        for (int i = n -1; i >= 0; i--)
        {
            mp[psum[i + 1]]++;
            mx = max (mx, mp[psum[i + 1]]);
            if(arr[i] == 0)
            {
                ans += mx;
                mp.clear();
                mx = 0;
            }
        }
        ans += mp[0];
        cout << ans << '\n';
    }

    return 0;
}



