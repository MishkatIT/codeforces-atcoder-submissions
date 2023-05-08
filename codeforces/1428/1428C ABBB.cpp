/*
    author    : MishkatIT
    created   : Monday 2023-05-08-23.46.47
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
        string str;
        cin >> str;
        int b = 0, ans = 0;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if(str[i] == 'A')
            {
                if(b) b--;
                else ans++;
            }
            else b++;
        }
        b %= 2;
        ans += b;
        cout << ans << '\n';
    }
    return 0;
}
