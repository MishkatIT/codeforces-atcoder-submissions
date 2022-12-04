/*
    author    : MishkatIT
    created   : Monday 2022-12-05-01.03.13
    problem   : B. Array Decrements
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int brr[n];
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            arr[i] -= brr[i];
            mx = max(mx, arr[i]);
        }
        bool ok = true;
        for (int i = 0;i < n; i++)
        {
            if(mx != arr[i] && brr[i])
                ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}

