/*
    author    : MishkatIT
    created   : Saturday 2022-10-29-23.31.59
    problem   : 1525 B. Permutation Sort
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
        if(is_sorted(arr, arr+n))
        {
            cout << "0" << '\n';
            continue;
        }
        if(arr[0] == n and arr[n-1] == 1)
        {
            cout << "3" << '\n';
            continue;
        }
        if(arr[0] == 1 or arr[n-1] == n)
        {
            cout << "1" << '\n';
            continue;
        }
        cout << "2" << '\n';

    }

    return 0;
}
