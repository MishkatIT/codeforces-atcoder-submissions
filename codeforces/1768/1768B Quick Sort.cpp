/*
    author    : MishkatIT
    created   : Friday 2023-01-06-21.14.20
    problem   : B. Quick Sort
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int order = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == (order + 1))
                order++;
        }
        int ans = 0;
//        cout << order << '\n';
        if(order != n)
        {
            ans = ceil((n - order)/ (k * 1.0));
        }
        cout << ans << '\n';

    }

    return 0;
}
