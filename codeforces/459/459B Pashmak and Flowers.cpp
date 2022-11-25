/*
    author    : MishkatIT
    created   : Saturday 2022-11-26-01.25.44
    problem   : 459 B. Pashmak and Flowers
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int mn = count(arr, arr + n, arr[0]);
    int mx = count(arr, arr + n, arr[n - 1]);
    int way;
    if(n == 2)
        way = 1;
    else if(arr[0] == arr[n - 1])
        way = ((mx * mx) - mx) / 2;
    else
        way = mx * mn;
    cout << arr[n - 1] - arr[0] << ' ' <<  way;
    return 0;
}



