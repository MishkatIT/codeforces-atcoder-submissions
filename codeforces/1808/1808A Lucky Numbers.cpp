/*
    author    : MishkatIT
    created   : Wednesday 2023-03-29-15.03.42
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        int mx = 0;
        int ans = r;
        for(int i = r; i >= l; i--)
        {
            string s = to_string(i);
            sort(s.begin(), s.end());
            int x = s.back() - s.front();
            if(x > mx)
            {
                mx = x;
                ans = i;
            }
            if(mx == 9) break;
        }
        cout << ans << '\n';
    }
    return 0;
}
