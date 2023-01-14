/*
    author    : MishkatIT
    created   : Saturday 2023-01-14-15.52.02
    problem   : D. Absolute Sorting
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
        int low = 0;
        int high = 1e9;
        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i] == arr[i + 1])
            {
                continue;
            }
            else if(arr[i] > arr[i + 1])
            {
                int temp = (arr[i] + arr[i + 1] + 1) / 2;
                low = max(low, temp);
            }
            else
            {
                int temp = (arr[i] + arr[i + 1]) / 2;
                high = min(high, temp);
            }
        }
        if(high >= low)
            cout << high << '\n';
        else
            cout << -1 << '\n';

    }
    return 0;
}

