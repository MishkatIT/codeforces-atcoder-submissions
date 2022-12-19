/*
    author    : MishkatIT
    created   : Monday 2022-12-19-20.43.57
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
        int temp = arr[0];
        vector<int> orr(n);
        for (int i = 0; i < n; i++)
        {
            orr[i] = temp | arr[i];
            temp = orr[i];
        }
        temp = arr[0];
        vector<int> andd(n);
        for (int i = 0; i < n; i++)
        {
            andd[i] = temp & arr[i];
            temp = andd[i];
        }
        sort(orr.begin(), orr.end());
        sort(andd.begin(), andd.end());
        cout << orr[n - 1] - andd[0] << '\n';

    }
    return 0;
}
