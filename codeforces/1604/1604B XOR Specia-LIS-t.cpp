/*
    author    : MishkatIT
    created   : Tuesday 2023-05-16-19.02.47
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
        if(n % 2 == 0)
        {
            cout << "YES" << '\n';
            continue;
        }
        bool decreasing = false;
        for (int i = 0; i + 1 < n; i++)
        {
            decreasing |= arr[i] >= arr[i + 1];
        }
        if(decreasing)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

