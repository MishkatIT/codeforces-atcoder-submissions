/*
    author    : MishkatIT
    created   : Thursday 2023-06-29-01.51.25
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
        int i = n;
        while(--i)
        {
            if(arr[i - 1] < arr[i])
                break;
        }
        while(i--)
        {
            if(arr[i - 1] > arr[i])
                break;
        }
        if(i < 0) i = 0;
        cout << n - (n - i) << '\n';
    }

    return 0;
}

