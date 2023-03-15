/*
    author    : MishkatIT
    created   : Wednesday 2023-03-15-22.45.43
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        bool ok = true;
        int i = 0;
        for (; i < n; i++)
        {
            if(arr[i] < i)
            {
                break;
            }
        }
        if(i != n) i--;
        for (int j = n - 1; j >= i; j--)
        {
            if(arr[j] < (n - 1 - j))
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
