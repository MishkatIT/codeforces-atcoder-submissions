/*
    author    : MishkatIT
    created   : Tuesday 2022-11-22-01.50.03
    problem   : 1744 B. Even-Odd Increments
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
        long long n, q;
        cin >> n >> q;
        long long arr[n];
        int odd = 0, even = 0;
        long long sum = 0;
        for(long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] & 1)
                odd++;
            else
                even++;
            sum += arr[i];
        }
        int x, y;
        while(q--)
        {
            cin >> x >> y;
            if(x & 1)
            {
                sum += (odd * y);
                if(y & 1)
                {
                    even += odd;
                    odd = 0;
                }
            }
            else
            {
                sum += (even * y);
                if(y & 1)
                {
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << '\n';
        }

    }

    return 0;
}



