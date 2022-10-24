/*
    author    : MishkatIT
    created   : Tuesday 2022-10-25-00.50.27
    problem   : 1183 B. Equalize Prices
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        if(ceil(arr[n-1]-arr[0])/2 > k)
            cout << "-1" << '\n';
        else
            cout << arr[0]+k << '\n';
    }

    return 0;
}

