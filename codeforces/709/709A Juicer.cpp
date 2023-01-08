/*
    author    : MishkatIT
    created   : Sunday 2023-01-08-23.50.33
    problem   : A. Juicer
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, b, d;
    cin >> n >> b >> d;
    int orange;
    long long sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> orange;
        if(orange <= b)
            sum += orange;
        if(sum > d)
        {
            cnt++;
            sum = 0;
        }
    }
    cout << cnt;
    return 0;
}

