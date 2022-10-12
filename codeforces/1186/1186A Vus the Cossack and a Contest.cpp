/*
    author    : MishkatIT
    created   : Wednesday 2022-10-12-22.52.48
    problem   : 1186 A. Vus the Cossack and a Contest
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m, k;
    cin >> n >> m >> k;
    cout << ((m>=n && k>=n)? "YES" : "No");

    return 0;
}



