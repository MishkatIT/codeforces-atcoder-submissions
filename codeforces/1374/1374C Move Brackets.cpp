/*
    author    : MishkatIT
    created   : Friday 2022-12-16-17.05.53
    problem   : C. Move Brackets
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt = 0;
        int ans = 0;
        for(auto &i: str)
        {
            if(i == '(')
                cnt++;
            else
            {
                if(cnt)
                    cnt--;
                else
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

