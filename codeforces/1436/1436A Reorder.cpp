/*
    author    : MishkatIT
    created   : Thursday 2023-01-26-00.34.12
    problem   : A. Reorder
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
        int n, m;
        cin >> n >> m;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            m -= temp;
        }
        if(m)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}

