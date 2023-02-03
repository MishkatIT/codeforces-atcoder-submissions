/*
    author    : MishkatIT
    created   : Friday 2023-02-03-20.43.54
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
        bool ok = false;
        int u = 0, d = 0, r = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if(str[i] == 'U')
                if(d)
                    d--;
                else
                    u++;
            else if(str[i] == 'D')
                if(u)
                    u--;
                else
                    d++;
            else if(str[i] == 'R')
                if(l)
                    l--;
                else
                    r++;
            else if(str[i] == 'L')
                if(r)
                    r--;
                else
                    l++;
            if(u == 1 && r == 1 && d == 0 && l == 0)
            {
                ok = true;
                break;
            }

        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
