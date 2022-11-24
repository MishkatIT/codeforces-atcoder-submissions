/*
    author    : MishkatIT
    created   : Thursday 2022-11-24-16.17.53
    problem   : 1734 A. Select Three Sticks
*/
#include<iostream>
#include<map>
#include<algorithm>
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        long long ans = 1e9;
        for (int i = 1; i < n - 1; i++)
        {
            ans = min (ans,(long long) (arr[i] - arr[i - 1] + arr[i + 1] - arr[i]));
        }
        cout << ans << '\n';
    }

    return 0;
}



