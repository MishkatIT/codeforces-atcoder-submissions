/*
    author    : MishkatIT
    created   : Friday 2023-06-09-22.57.01
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if(str.front() != '9')
        {
            string ans = string(n, 'x');
            for (int i = 0; i < n; i++)
            {
                ans[i] = ('9' - str[i]) + '0';
            }
            cout << ans << '\n';
        }
        else
        {
            string ans;
            char x = '1';
            for (int i = n - 1; i >= 0; i--)
            {
                if(str[i] > x)
                {
                    int nn = 10 + (x != '0');
                    x = '0';
                    int xx = nn - (str[i] - '0');
                    string ttt = to_string(xx);
                    ans = ttt + ans;
                }
                else
                {
                    ans = to_string(x - str[i]) + ans;
                    x = '1';
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
