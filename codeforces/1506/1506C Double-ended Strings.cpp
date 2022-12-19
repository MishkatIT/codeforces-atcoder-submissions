/*
    author    : MishkatIT
    created   : Monday 2022-12-19-20.00.59
    problem   : C. Double-ended Strings
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
        string a, b;
        cin >> a >> b;
        int dp[a.length() + 1][b.length() + 1];
        int mx = 0;
        for (int i = 0; i <= a.length(); i++)
        {
            for (int j = 0; j <= b.length(); j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else if(a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    mx = max(mx, dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        cout << (a.length() + b.length()) - 2 * mx << '\n';
    }
    return 0;
}
