/*
    author    : MishkatIT
    created   : Saturday 2022-11-19-11.17.49
    problem   : 1679 A. AvtoBus
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        long long n, x = 1;
        cin >> n;
        if(n & 1 || n < 4) {
            cout << -1 << '\n';
            continue;
        }
        if(n == 6 || n == 4) {
            cout << "1 1" << '\n';
            continue;
        }
        if(n % 6 == 0) {
            cout << n / 6 << ' ';
        } else {
            long long cnt = 0, temp = n;
            while(temp % 6) {
                temp -= 4;
                cnt++;
            }
            cout << (temp / 6) + cnt << ' ';
        }
        if(n % 4 == 0) {
            cout << n / 4 << '\n';
        } else {
            long long cnt = 0, temp = n;
            while(temp % 4) {
                temp -= 6;
                cnt++;
            }
            cout << (temp / 4) + cnt << '\n';
        }
    }

    return 0;
}
