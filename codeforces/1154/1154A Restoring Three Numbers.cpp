/*
    author    : MishkatIT
    created   : Saturday 2022-11-05-02.40.27
    problem   : 1154 A. Restoring Three Numbers
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;

    int n = 4;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    for (int i = 0; i < n - 1; i++)
        cout << arr[3] - arr[i] << ' ';

    return 0;
}

