/*
    author    : MishkatIT
    created   : Sunday 2023-04-23-17.03.09
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
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        int segment = 1;
        char cur = str.front();
        for (int i = 0; i < n; i++)
        {
            if (str[i] != str.front())
            {
                if(cur == str.front())
                    segment++, cur = str[i];
            }
            else
                cur = str.front();
        }
        int ans = 0;
        if(b >= 0)
            ans = n * (a + b);
        else
            ans = n * a + b * segment;
        cout << ans << '\n';
    }
    return 0;
}
