/*
    author    : MishkatIT
    created   : Monday 2023-01-23-21.41.28
    problem   : C. Product of Three Numbers
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void gooo (void)
{
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            int first = n / i;
            for (int j = i + 1; j * j <= first; j++)
            {
                if(first % j == 0 && first / j != j)
                {
                    cout << "YES" << '\n';
                    cout << i << ' ';
                    cout << j << ' ';
                    cout << first / j << '\n';
                    return;
                }
            }
        }
    }
    cout << "NO" << '\n';
    return;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        gooo();
    }
    return 0;
}
