/*
    author    : MishkatIT
    created   : Tuesday 2023-05-02-19.44.39
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n = 3;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x = arr[2][0] + arr[2][1];
    int y = arr[2][0] + arr[1][0];
    int a = 0, b = 0, c = 0;
    if(x > y)
        a = x - y;
    else
        c = y - x;
    b = max(x, y) - arr[1][0] - arr[1][2];
    int temp = a + b + c;
    int f = a + arr[0][1] + arr[0][2];
    int cnt = 0;
    while(temp != f)
    {
        f += 1;
        temp += 3;
        cnt++;
    }
    arr[0][0] = a + cnt;
    arr[1][1] = b + cnt;
    arr[2][2] = c + cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " \n"[j == n - 1];
        }
    }
    return 0;
}
