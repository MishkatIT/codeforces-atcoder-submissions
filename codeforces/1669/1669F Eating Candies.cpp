/*
    author    : MishkatIT
    created   : Monday 2023-01-16-19.31.42
    problem   : F. Eating Candies
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
        int i = -1, j = n;
        int ans = 0, cnt = 0;
        long long sa = 0;
        long long sb = 0;
        while(i < j)
        {
            if(sa == sb)
            {
                ans += cnt;
                sa = arr[i + 1];
                cnt = 1;
                i++;
                sb = 0;
            }
            else if(sa < sb)
            {
                sa += arr[i + 1];
                i++;
                cnt++;
            }
            else
            {
                sb += arr[j - 1];
                j--;
                cnt++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

