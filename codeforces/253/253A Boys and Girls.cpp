/*
    author    : MishkatIT
    created   : Friday 2023-02-24-23.41.44
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    char x = 'B', y = 'G';
    if(n < m)
    {
        swap(n, m);
        swap(x, y);
    }
    for (int i = 0; i < n; i++)
    {
        cout << x;
        if(i < m)
            cout << y;
    }
    return 0;
}

