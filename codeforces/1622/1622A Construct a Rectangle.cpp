/*
    author    : MishkatIT
    created   : Sunday 2023-02-19-03.29.50
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n = 3;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool ok = false;
        if(arr[0] + arr[1] == arr[2] || arr[1] + arr[2] == arr[0])
            ok = true;
        else if((arr[1] == arr[2] && arr[0] % 2 == 0) || (arr[0] == arr[1] && arr[2] % 2 == 0))
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

