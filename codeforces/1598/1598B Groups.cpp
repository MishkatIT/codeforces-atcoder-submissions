/*
    author    : MishkatIT
    created   : Thursday 2023-01-05-02.02.42
    problem   : B. Groups
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
        int arr[n][5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
                cin >> arr[i][j];
        }
        bool ok = false;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if(i != j)
                {
                    int d1 = i, d2 = j;
                    int on1 = 0;
                    int on2 = 0;
                    int off = 0;
                    for (int k = 0; k < n; k++)
                    {
                        if(arr[k][d1])
                            on1++;
                        if(arr[k][d2])
                            on2++;
                        if(arr[k][d1] == 0 && arr[k][d2] == 0)
                            off++;
                    }
                    if(on1 >= n / 2 && on2 >= n / 2 && off == 0)
                    {
                        ok = true;
                        goto en;
                    }
                }
            }
        }
en:
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

