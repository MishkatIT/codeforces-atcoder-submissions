/*
    author    : MishkatIT
    created   : Sunday 2023-04-23-21.35.06
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    set<char> a, b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j == i || j == (n - 1 - i))
            {
                a.insert(arr[i][i]);
                a.insert(arr[i][n - 1 - i]);
            }
            else
            {
                b.insert(arr[i][j]);
                b.insert(arr[i][n - 1 - j]);
            }
        }
    }
    if(a.size() == 1 && b.size() == 1 && *a.begin() != *b.begin())
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
