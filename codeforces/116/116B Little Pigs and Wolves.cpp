/*
    author    : MishkatIT
    created   : Tuesday 2023-05-02-18.28.07
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
char arr[12][12];
int check(int i, int j, char c)
{
    if(arr[i - 1][j] == c || arr[i + 1][j] == c || arr[i][j - 1] == c || arr[i][j + 1] == c)
        return 1;
    return 0;
}

int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    memset(arr, '.', sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int w = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == 'P')
            {
                p += (check(i, j, 'W'));

            }
            else if(arr[i][j] == 'W')
            {
                w += (check(i, j, 'P'));
            }
        }
    }
    cout << min(p, w);
    return 0;
}

