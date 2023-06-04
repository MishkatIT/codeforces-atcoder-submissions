/*
    author    : MishkatIT
    created   : Monday 2023-06-05-01.07.23
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        bool ok = true;
        for (int l = i - 1; l >= max(0, i - x - 1); l--)
        {
            ok &= (arr[l] > arr[i]);
        }
        for (int r = i + 1; r < min(n, i + y + 1); r++)
        {
            ok &= (arr[r] > arr[i]);
        }
        if(ok)
        {
            cout << i + 1;
            return 0;
        }
    }
}

