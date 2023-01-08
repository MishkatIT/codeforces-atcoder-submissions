/*
    author    : MishkatIT
    created   : Sunday 2023-01-08-19.34.08
    problem   : D. Queue
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(sum > arr[i])
            ans--;
        else
             sum += arr[i];
    }
    cout << ans;
    return 0;
}

