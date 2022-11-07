/*
    author    : MishkatIT
    created   : Tuesday 2022-11-08-01.19.21
    problem   : 1624 A. Plus One on the Subset
*/
#include<iostream>
#include<algorithm>
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
        sort(arr, arr + n);
        cout << (n > 0 ? arr[n - 1] - arr[0]: 0 ) << '\n';
    }

    return 0;
}

