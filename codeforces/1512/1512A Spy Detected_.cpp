/*
    author    : MishkatIT
    created   : Monday 2023-01-30-00.34.46
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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = i + 1;
        }
        sort(arr, arr + n);
        cout <<(arr[0] == arr[1] ? mp[arr[n - 1]] : mp[arr[0]]) << '\n';
    }
    return 0;
}
