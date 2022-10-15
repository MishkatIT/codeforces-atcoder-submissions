/*
    author    : MishkatIT
    created   : Monday 2022-10-10-16.58.45
    problem   : 1746 B. Rebellion
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
        int cnt=0;
        cin >> n;
        int a[n];
        int b[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        copy(a, a+n, b);
        sort(a, a+n);
        for (int i=0; i<n; i++)
        {
            if(a[i]!= b[i])
                cnt++;
        }
        cout << cnt/2 << '\n';;

    }

    return 0;
}

