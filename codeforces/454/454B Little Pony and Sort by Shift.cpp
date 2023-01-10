/*
    author    : MishkatIT
    created   : Tuesday 2023-01-10-21.13.50
    problem   : B. Little Pony and Sort by Shift
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
    int pos = 0;
    int track = 0;
    for(int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            track++;
            pos = i;
        }
    }
    if(!track)
        cout << 0;
    else if(track != 1)
        cout << -1;
    else
    {
        if(arr[n - 1] <= arr[0])
            cout << n - pos;
        else
            cout << -1;
    }

    return 0;
}

