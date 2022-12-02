/*
    author    : MishkatIT
    created   : Friday 2022-12-02-23.53.32
    problem   : 766 B. Mahmoud and a Triangle
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    bool ok = false;
    for(int i = 0; i < n - 2; i++)
    {
        if(arr[i] + arr[i + 1] > arr[i + 2])
        {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}

