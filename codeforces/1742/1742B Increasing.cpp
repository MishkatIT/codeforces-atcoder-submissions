/*
    author    : MishkatIT
    created   : Thursday 2022-10-13-20.59.25
    problem   : 1742 B. Increasing
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    st:
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        for(int i=1; i<n; i++)
            if(arr[i]-arr[i-1]<1)
        {
            cout << "NO" << '\n';
            goto st;
        }
        cout << "YES" << '\n';
    }
}



