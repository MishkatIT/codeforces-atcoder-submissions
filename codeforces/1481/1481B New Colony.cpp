/*
    author    : MishkatIT
    created   : Tuesday 2022-12-13-22.01.05
    problem   : 1481 B. New Colony
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int pos;
        while(k--)
        {
            bool ok = false;
            for (int i = 1; i < n; i++)
            {
                if(arr[i - 1] < arr[i])
                {
                    arr[i - 1]++;
                    pos = i;
                    ok = true;
                    break;
                }
            }
            if(!ok)
                break;
        }
        if(k >= 0)
            cout << -1 << '\n';
        else
            cout << pos << '\n';
    }
    return 0;
}

