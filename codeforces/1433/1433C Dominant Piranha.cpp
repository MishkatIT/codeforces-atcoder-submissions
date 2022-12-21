/*
    author    : MishkatIT
    created   : Thursday 2022-12-22-03.58.50
    problem   : C. Dominant Piranha
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
        int mx =  - 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int i;
        for (i = 0; i < n; i++)
        {
            if(arr[i] == mx)
            {
                if((( i - 1 >= 0) && (arr[i - 1] < mx)) || ((i + 1 < n) && (arr[i + 1] < mx)))
                    break;
            }
        }
        int ans = -1;
        if(i != n)
            ans = (i + 1);
        cout << ans << '\n';
    }
    return 0;
}

