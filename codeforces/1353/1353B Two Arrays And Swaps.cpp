/*
    author    : MishkatIT
    created   : Sunday 2022-10-09-22.07.17
    problem   : 1353 B. Two Arrays And Swaps
*/
#include<iostream>
#include<functional>
#include<numeric>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t, n, swp;
    cin >> t;
    int a[n], b[n];
    while(t--)
    {
        cin >> n >> swp;
        int a[n], b[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int i=0; i<n; i++)
            cin >> b[i];
        sort(a, a+n);
        sort(b, b+n, greater<>());
        for (int i=0; i<swp; i++)
        {
            if(a[i]<b[i])
                swap(a[i], b[i]);
            else break;
        }
        int sum =0;
        sum = accumulate(a,a+n,sum);
        cout << sum << '\n';

    }

    return 0;
}


