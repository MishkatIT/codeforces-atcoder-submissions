/*
    author    : MishkatIT
    created   : Wednesday 2023-03-29-01.45.33
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
        int n0, n1, n2;
        cin >> n0 >> n1 >> n2;
        string ans, str;
        int x = 0;
        if(n0 > 0)
        {
            ans += string(n0 + 1, '0');
        }
        if(n1 > 0)
        {
            if(ans.back() == '0')
            {
                ans += '1', n1--;
            }
            else n1++;
            while(n1 > 1)
            {
                ans += (x + '0');
                x ^= 1;
                n1--;
            }
        }
        if(n2 > 0)
        {
            if(ans.back() == '1')
                n2--;
            ans += string(n2 + 1, '1');
        }
        if(n1 && ans.back() != (x + '0'))
            ans += (x + '0');
        cout << ans << '\n';
    }
    return 0;
}

