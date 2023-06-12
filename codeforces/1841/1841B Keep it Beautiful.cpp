/*
    author    : MishkatIT
    created   : Tuesday 2023-06-13-00.48.40
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
        int q;
        cin >> q;
        int first, last;
        --q;
        int x;
        cin >> x;
        first = last = x;
        cout << 1;
        bool ok = true;
        while(q--)
        {
            cin >> x;
            if(ok)
            {
                if(x >= last)
                {
                    cout << 1;
                    last = x;
                }
                else if(x <= first)
                {
                    cout << 1;
                    last = x;
                    ok = false;
                }
                else
                    cout << 0;
            }
            else
            {
                if(x >= last && x <= first)
                {
                    cout << 1;
                    last = x;
                }
                else
                    cout << 0;
            }
        }
        cout << '\n';
    }

    return 0;
}

