/*
    author    : MishkatIT
    created   : Thursday 2022-10-20-21.30.53
    problem   : 1749 B. Death's Blessing
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    long long  t;
    cin >> t;
    while(t--)
    {
        long long  n;
        cin >> n;
        long long  arr[n];
        long long  ans=0;
        for(long long  i=0; i<n; i++)
        {
            cin >> arr[i];
            ans+=arr[i];
        }
        long long  temp=0;
        for(long long  i=0; i<n; i++)
        {
            cin >> arr[i];
            temp+=arr[i];
        }
        long long  x = *max_element(arr, arr+n);
        cout << ans+temp-x << '\n';

    }

    return 0;
}

