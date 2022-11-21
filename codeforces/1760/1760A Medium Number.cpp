/*
    author    : MishkatIT
    created   : Monday 2022-11-21-20.36.09
    problem   : 1760 A. Medium Number
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
        int n = 3;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << arr[1] << '\n';

    }

    return 0;
}



