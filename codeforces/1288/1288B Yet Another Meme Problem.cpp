/*
    author    : MishkatIT
    created   : Wednesday 2023-05-10-21.42.34
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
        long long a, b;
        cin >> a >> b;
        long long x = log10(b) + 1;
        long long temp = 9;
        for (int i = 1; i < x; i++)
        {
            temp = temp * 10 + 9;
        }
        if(b < temp) x--;
        cout << a * x << '\n';
    }
    return 0;
}

