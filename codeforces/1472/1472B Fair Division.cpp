/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-02.36.46
    problem   : B. Fair Division
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
        int one = 0;
        int two = 0;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp & 1)
                one++;
            else
                two++;
        }
        bool ok = false;
        if(two == n * 2)
            ok = true;
        else if(one == 0)
        {
            if(two % 2 == 0)
                ok = true;
        }
        else
        {
            if(one % 2 == 0)
                ok = true;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

