/*
    author    : MishkatIT
    created   : Monday 2022-11-14-05.10.33
    problem   : 1360 D. Buying Shovels
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
        int n, k;
        cin >> n >> k;
        if(n <= k)
        {
            cout << 1 << '\n';
            continue;
        }
        int ans = n;
        for (int i = 1; i * i <= n; i++)
            if (n % i == 0)
            {
                if (n / i <= k)
                    ans = min(ans, n / (n / i));
                if (i <= k)
                    ans = min(ans, n / i);
            }
            cout << ans << '\n';
    }
    return 0;
}















//TLE
////int isPrime(int n)
////{
////    for (long long i = 2; i * i <= n; i++)
////    {
////        if(n % i == 0)
////            return 0;
////    }
////    return 1; // its placement was wrong, now fixed.
////}
//int main()
//{
//    fio;
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n, k;
//        cin >> n >> k;
//        if(n <= k)
//        {
//            cout << 1 << '\n';
//            continue;
//        }
//        if(n > k)
//        {
////            if(isPrime(n))
////            {
////                cout << n << '\n';
////                continue;
////            }
//            bool ok = false;
//            for (int i = 2; i  <= n; i++)
//            {
//                if(n % i == 0)
//                {
//                    if(i * k >= n)
//                        {
//                            cout << i << '\n';
//                            break;
//                        }
//                    ok = true;
//
//                }
//            }
//            if(!ok)
//                cout << n << '\n';
//        }
//    }
//
//    return 0;
//}



