/*
    author    : MishkatIT
    created   : Monday 2022-12-05-02.56.17
    problem   : 1566 B. MIN-MEX Cut
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
        string str;
        cin >> str;
        int zero = 0;
        int one = 0;
        bool ok = true;
        for(auto i: str)
        {
            if(i == '0')
            {
                if(ok)
                    zero++;
                ok = false;
            }
            else
            {
                one++;
                ok = true;
            }
            if(zero > 1)
                break;
        }
        int ans;
        if(one == str.length())
            ans = 0;
        else
        {
            if(zero > 1)
                ans = 2;
            else
                ans = 1;
        }
        cout << ans << '\n';
    }
    return 0;
}

