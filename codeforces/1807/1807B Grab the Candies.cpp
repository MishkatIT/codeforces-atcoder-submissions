/*
    author    : MishkatIT
    created   : Sunday 2023-03-19-21.00.24
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
        int temp;
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp & 1)
                odd += temp;
            else
                even += temp;
        }
        if(even > odd)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

    }

    return 0;
}
