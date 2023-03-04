/*
    author    : MishkatIT
    created   : Sunday 2023-03-05-01.24.59
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
                arr[i]++;
        }
        for (int i = 0; i + 1 < n; i++)
        {
            if(arr[i + 1] % arr[i] == 0)
                arr[i + 1]++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}

