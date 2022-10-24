/*
    author    : MishkatIT
    created   : Tuesday 2022-10-25-02.31.39
    problem   : 1617 B. GCD Problem
*/
#include<bits/stdc++.h>
//#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
//    fio;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n, c = 1;
        cin >> n;
        for(long long i=2; i<=n; i++)
            if((__gcd(i, (n - i - 1))) == 1)
            {
                printf("%lld %lld %lld \n", i, n - i - 1, c);
                break;
            }
    }
    return 0;
}

