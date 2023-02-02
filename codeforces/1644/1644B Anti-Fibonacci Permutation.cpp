/*
    author    : MishkatIT
    created   : Thursday 2023-02-02-22.25.11
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
        for (int i = 1; i <= n; i++)
        {
            cout << i << ' ';
            for (int j = n; j >= 1; j--)
            {
                if(i == j)
                    continue;
                cout << j << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
