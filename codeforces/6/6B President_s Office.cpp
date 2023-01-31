/*
    author    : MishkatIT
    created   : Wednesday 2023-02-01-01.00.13
    problem   : B. President's Office
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    char c;
    cin >> n >> m >> c;
    char arr[n + 2][m + 2];
    memset(arr, '.', sizeof arr);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    set<char> s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(arr[i][j] == c)
            {
                if(arr[i - 1][j] != '.' && arr[i - 1][j] != c)
                    s.insert(arr[i - 1][j]);
                if(arr[i + 1][j] != '.' && arr[i + 1][j] != c)
                    s.insert(arr[i + 1][j]);
                if(arr[i][j - 1] != '.' && arr[i][j - 1] != c)
                    s.insert(arr[i][j - 1]);
                if(arr[i][j + 1] != '.' && arr[i][j + 1] != c)
                    s.insert(arr[i][j + 1]);
            }
        }
    }
    cout << (int)s.size();
    return 0;
}

