/*
    author    : MishkatIT
    created   : Sunday 2022-12-25-13.33.12
    problem   : B. A and B and Compilation Errors
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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int brr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> brr[i];
    }
    int crr[n - 2];
    for (int i = 0; i < n - 2; i++)
    {
        cin >> crr[i];
    }
    sort(arr, arr + n);
    sort(brr, brr + n - 1);
    sort(crr, crr + n - 2);
    bool ok = false;
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] != brr[i])
        {
            ok = true;
            cout << arr[i] << '\n';
            break;
        }
    }
    if(!ok)
        cout << arr[n - 1] << '\n';
    ok = false;
    for(int i = 0; i < n - 2; i++)
    {
        if(brr[i] != crr[i])
        {
            ok = true;
            cout << brr[i] << '\n';
            break;
        }
    }
    if(!ok)
        cout << brr[n - 2] << '\n';
    return 0;
}
