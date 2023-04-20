/*
    author    : MishkatIT
    created   : Friday 2023-04-21-01.28.03
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
        int len = 0;
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] != brr[i])
            {
                if(l == -1) l = i;
                r = i;
            }
        }
        while(l > 0 && brr[l - 1] <= brr[l])l--;
        while(r + 1 < n && brr[r + 1] >= brr[r])r++;
        cout << l + 1 << ' ' << r + 1 << '\n';
    }

    return 0;
}

