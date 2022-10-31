/*
    author    : MishkatIT
    created   : Monday 2022-10-31-18.53.56
    problem   : 1365 B. Trouble Sort
*/
#include<iostream>
#include<algorithm>
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
        {
            cin >> arr[i];
        }
        int a[n];
        int zero = 0, one = 0;
        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i])
                one++;
            else
                zero++;

        }
        if(is_sorted(arr, arr+n) || (zero > 0 && zero != n) || (one > 0 && one != n))
        {
            ok = true;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}

