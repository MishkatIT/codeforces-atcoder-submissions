/*
    author    : MishkatIT
    created   : Friday 2022-12-02-01.13.18
    problem   : 1692 C. Where's the Bishop
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
st:
    while(t--)
    {
        int n = 8;
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 2; j++)
            {
                if(arr[i][j] == '#' && arr[i][j + 1] == '.' && arr[i][j + 2] == '#')
                {
                    cout << i + 2 << ' ' << j + 2 << '\n';
                    goto st;
                }
            }
        }
    }
    return 0;
}

