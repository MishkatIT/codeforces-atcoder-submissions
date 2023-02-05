/*
    author    : MishkatIT
    created   : Monday 2023-02-06-01.49.45
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void LesGo (void)
{
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i < b - 1; i++)
    {
        for (long long j = i + 1; j < b; j++)
        {
            if(__gcd(i, j) == 1)
            {
                for (long long k = j + 1; k <= b; k++)
                {
                    if(__gcd(j, k) == 1)
                    {
                        if(__gcd(i, k) > 1)
                        {
                            cout << i << ' ' << j << ' ' << k;
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << -1;
    return;
}
int main()
{
    fio;
    LesGo();
    return 0;
}
