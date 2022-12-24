/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-16.33.30
    problem   : B. z-sort
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = n;
    int x = 0;
    while(i)
    {
        if(i)
            cout << arr[x] << ' ', i--;
        if(i)
            cout << arr[n - x - 1] << ' ', i--;
        x++;
    }
    return 0;
}

