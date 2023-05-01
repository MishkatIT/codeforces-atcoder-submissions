/*
    author    : MishkatIT
    created   : Tuesday 2023-05-02-01.48.17
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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool zero = false, one = false;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == '1' && b[i] == '1')
            {
                if(zero)
                {
                    ans += 2;
                    zero = false;
                }
                else
                    one = true;
            }
            else if(a[i] == '0' && b[i] == '0')
            {
                if(one)
                {
                    ans += 2;
                    one = false;
                }
                else if(zero)
                    ans += 1;
                else
                    zero = true;
            }
            else
            {
                if(zero)
                {
                    ans += 1;
                    zero = false;
                }
                one = false;
                ans += 2;
            }
        }
        if(zero)ans++;
        cout << ans << '\n';
    }
    return 0;
}

