/*
    author    : MishkatIT
    created   : Thursday 2023-03-09-22.07.49
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
        int ans = 0, temp;
        int cnt = 0, have = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == 1)
            {
                if(have)
                    have--;
                else
                    ans++;
                cnt++;
            }
            else
            {
                while(cnt >= 3)
                {
                    int x = (cnt / 3);
//                    ans -= x;
                    cnt -= x * 2;
                    have += x;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

