/*
    author    : MishkatIT
    created   : Sunday 2023-04-09-21.12.22
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[2][n];
        int x = 1, y = (n * 2) - 2;
        for (int i = 0; i + 1 < n; i++)
        {
            if(i % 2 == 0)
            {
                arr[0][i + 1] = ++x;
                arr[1][i] = x - 1;
                x++;
            }
            else
            {
                arr[0][i + 1] = y--;
                arr[1][i] = y--;
            }
        }
        arr[0][0] = 2 * n;
        arr[1][n - 1] = (2 * n) - 1;
        for (int i = 0; i < 2; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " \n"[j == n - 1];
            }
        }
    }
    return 0;
}
