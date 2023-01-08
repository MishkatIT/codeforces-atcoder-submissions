/*
    author    : MishkatIT
    created   : Sunday 2023-01-08-21.28.58
    problem   : b
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
        int x = 1;
        int y = n * n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            if(!(i & 1))
            {
                for (int j = 0; j < n; j++)
                {
                    if(!(j & 1))
                        arr[i][j] = x, x++;
                    else
                        arr[i][j] = y, y--;
                }
            }
            else
            {
                for (int j = n - 1; j >=0; j--)
                {
                    if((j & 1))
                        arr[i][j] = x, x++;
                    else
                        arr[i][j] = y, y--;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }

    }
    return 0;
}

