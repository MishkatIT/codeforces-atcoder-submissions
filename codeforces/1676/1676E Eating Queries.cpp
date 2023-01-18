/*
    author    : MishkatIT
    created   : Wednesday 2023-01-18-23.22.59
    problem   : E. Eating Queries
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
        int n, q;
        cin >> n >> q;
        int arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<>());
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i] + arr[i - 1];
        }
        int temp;
        for (int i = 0; i < q; i++)
        {
            cin >> temp;
            if(temp > arr[n - 1])
                cout << -1 << '\n';
            else
            {
                cout << lower_bound(arr, arr + n, temp) - arr + 1 << '\n';
            }
        }
    }
    return 0;
}

