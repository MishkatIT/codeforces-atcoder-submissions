/*
    author    : MishkatIT
    created   : Sunday 2022-11-13-23.06.02
    problem   : 363 B. Fence
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long mn = 1e10;
    long long temp = 0;
    int ans = 0;
    int x = 0;
    long long backup = 0;
    if(n == k)
    {
        cout << 1;
        return 0;
    }
    for ( int i = 0; i < k; i++)
    {
        temp += arr[i];
    }
    for (int i = 0; i < n - k + 1; i++)
    {
        if (temp < mn)
        {
            mn = temp;
            ans = i + 1;
        }
        temp = -arr[i] + temp + arr[i+k];
    }
    cout << ans;

    return 0;
}



