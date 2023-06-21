/*
    author    : MishkatIT
    created   : Wednesday 2023-06-21-12.07.21
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n, m, sx, sy;
bool lft = true;
void print(int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i == sx && j == sy) continue;
            if(lft)
                cout << i << ' ' << j << '\n';
            else
                cout << i << ' ' << m - j + 1 << '\n';
        }
        lft ^= 1;
    }
}
int main()
{
    fio;
    cin >> n >> m >> sx >> sy;
    cout << sx << ' ' << sy << '\n';
    print(sx, n);
    print(1, sx - 1);
    return 0;
}

