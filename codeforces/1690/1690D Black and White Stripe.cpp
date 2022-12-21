/*
    author    : MishkatIT
    created   : Thursday 2022-12-22-04.54.00
    problem   : D. Black and White Stripe
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        vector<int> psum(n + 1);
        for(int i = 0; i < n; i++)
            psum[i + 1] = psum[i] + (str[i] == 'W');
//        for(auto i: psum)
//                        cout << i << ' '; cout << '\n';
        int ans = k;
        for (int i = 0; i <= n - k; i++)
            ans = min(ans, psum[i + k] - psum[i]);
        cout << ans << '\n';
    }
    return 0;
}

