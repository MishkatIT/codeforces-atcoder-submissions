/*
    author    : MishkatIT
    created   : Thursday 2022-10-27-23.20.19
    problem   : 1538 B. Friends and Candies
*/
#include<iostream>
#include<numeric>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, ans = 0;
        cin >> n;
        long long arr[n];
        for(long long i = 0; i < n; i++)
            cin >> arr[i];
        long long sum = 0;
        sum = accumulate(arr, arr+n, sum);
        if(sum % n!= 0) //average should be divisible, Otherwise, the distribution would be impossible.
            ans =  -1;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i] > sum / n) // finding the candies greater than the average.
                    ans++;
            }

        }
        cout << ans << '\n';



    }

    return 0;
}



