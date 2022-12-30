/*
    author    : MishkatIT
    created   : Friday 2022-12-30-16.22.19
    problem   : B. Sequential Nim
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
                ok ^= 1;
            else
            {
                ok ^= 1;
                break;
            }
        }
        cout << (ok ? "First" : "Second") << '\n';
    }
    return 0;
}

