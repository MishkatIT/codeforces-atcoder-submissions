/*
    author    : MishkatIT
    created   : Thursday 2022-11-10-02.35.50
    problem   : 1352 C. K-th Not Divisible by n
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k, ans;
        cin >> n >> k;
        if (k < n)
        {
            cout << k << '\n';
            continue;
        }
        else
        {
            ans = k + ((k - 1) / (n - 1));

        }
        cout << ans << '\n';
    }
    return 0;
}



