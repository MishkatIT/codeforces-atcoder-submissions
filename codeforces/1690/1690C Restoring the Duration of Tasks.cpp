/*
    author    : MishkatIT
    created   : Friday 2022-12-02-02.05.31
    problem   : 1690 C. Restoring the Duration of Tasks
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
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int brr[n];
        for(int i = 0; i < n; i++)
            cin >> brr[i];
        cout << brr[0] - arr[0] << ' ';
        for(int i = 1; i < n; i++)
        {
            cout << brr[i] - arr[i] - ((brr[i - 1] - arr[i]) * (brr[i - 1] > arr[i])) << ' ';
        }
        cout << '\n';
    }
    return 0;
}

