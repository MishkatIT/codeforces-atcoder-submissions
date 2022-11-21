/*
    author    : MishkatIT
    created   : Thursday 2022-10-13-22.29.54
    problem   : 1742 D. Coprime
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t, n;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[1010];
        memset(arr, 0, sizeof arr);
        int temp;
        for(int i = 1; i <= n; i++)
        {
            cin >> temp;
            arr[temp] = i;
        }
        int ans = -1;
        for (int i = 1; i < 1010; i++)
            if(arr[i] != 0)
                for(int j = 1; j < 1010; j++)
                    if(arr[j] != 0)
                        if(__gcd(i, j) == 1)
                            ans = max(ans, arr[i] + arr[j]);
        cout << ans << '\n';

    }
    return 0;
}



