/*
    author    : MishkatIT
    created   : Wednesday 2023-05-31-20.35.17
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int arr[55][55];
int n, m;
void check()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == 1)
            {
                for (int x = 0; x < m; x++)
                {
                    if(arr[i][x] == 0)
                        arr[i][x] = 2;
                }
                for (int x = 0; x < n; x++)
                {
                    if(arr[x][j] == 0)
                        arr[x][j] = 2;
                }
            }
        }
    }
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        }
        check();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] == 0)
                {
                    ans ^= 1;
                    arr[i][j] = 1;
                    check();
                }
            }
        }
        if(ans & 1)
            cout << "Ashish" << '\n';
        else
            cout << "Vivek" << '\n';
    }
    return 0;
}

