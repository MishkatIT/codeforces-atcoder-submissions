/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-21.19.18
    problem   : A. Balanced Rating Changes
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int temp;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp == 0)
            cout << 0 << '\n';
        else if(temp < 0)
        {
            if(temp & 1)
            {
                if(ok)
                {
                    cout << (int)(floor(temp / 2.0)) << '\n';
                    ok = false;
                }
                else
                {
                    cout << (int)(temp / 2.0) << '\n';
                    ok = true;
                }
            }
            else
            {
                cout << temp / 2 << '\n';
            }
        }
        else
        {
            if(temp & 1)
            {
                if(!ok)
                {
                    cout << (int)(ceil(temp / 2.0)) << '\n';
                    ok = true;
                }
                else
                {
                    cout << (int)(temp / 2.0) << '\n';
                    ok = false;
                }
            }
            else
            {
                cout << temp / 2 << '\n';
            }
        }
    }
    return 0;
}

