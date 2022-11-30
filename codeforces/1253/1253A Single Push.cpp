/*
    author    : MishkatIT
    created   : Wednesday 2022-11-30-22.12.52
    problem   : 1253 A. Single Push
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
            cin >> arr[i];
        int brr[n];
        int dif;
        bool x = true;
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            if(x)
                if(brr[i] != arr[i])
                {
                    dif = brr[i] - arr[i];
                    x = false;
                }
        }
        bool ok = true;
        bool check = true;
        int cnt = 0;
//        static int dif; static shit ;|
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                if(check)
                {
                    cnt++;
                    check = false;
                }
                if(cnt > 1)
                {
                    ok = false;
                    break;
                }
                if (brr[i] - arr[i] != dif || dif < 0)
                {
                    ok = false;
                    break;
                }
            }
            else
                check = true;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

