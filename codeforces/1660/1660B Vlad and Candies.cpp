/*
    author    : MishkatIT
    created   : Sunday 2023-01-29-23.47.35
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
        cin >> n ;
        int arr[n];
        for(int i = 0; i < n; ++i)
            cin >> arr[i] ;
        sort(arr, arr + n);
        if((n == 1 && arr[0] > 1) ||(arr[n-1] - arr[n-2] > 1))
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}

