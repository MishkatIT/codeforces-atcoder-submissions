/*
    author    : MishkatIT
    created   : Tuesday 2024-03-05-21.02.11
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long divi = 0, sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                divi++;
                sum += j;
                if (i / j != j) {
                    divi++;
                    sum += i / j;
                }
            }
        }
    }
    cout << divi << ' ' << sum;
    return 0;
}

