/*
    author    : MishkatIT
    created   : Saturday 2023-04-22-01.03.01
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            if(brr[i] > arr[i])
                swap(brr[i], arr[i]);
        }
        sort(arr, arr + n);
        sort(brr, brr + n);
        cout << arr[n - 1] * brr[n - 1] << '\n';
    }

    return 0;
}

