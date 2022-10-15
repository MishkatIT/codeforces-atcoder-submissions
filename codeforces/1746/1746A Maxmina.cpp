/*
    author    : MishkatIT
    created   : Monday 2022-10-10-16.58.45
    problem   : 1385 A. Three Pairwise Maximums
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i=0; i<n; i++)
            cin >> arr[i];
        int cnt=0;
        cnt=count(arr,arr+n,0);
        if(cnt==n)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';

    }

    return 0;
}
