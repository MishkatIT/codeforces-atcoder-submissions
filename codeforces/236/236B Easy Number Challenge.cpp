/*
    author    : MishkatIT
    created   : Wednesday 2022-10-26-19.11.59
    problem   : 236 B. Easy Number Challenge
*/
#include<iostream>
#define MX 1000000
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int temp[MX];
int main()
{
    fio;
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 1; i <= MX; i++)
        for(int j = 0; j <= MX; j += i)
            temp[j]++;
    long long ans = 0;
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            for(int k = 1; k <= c; k++)
                ans += temp[i * j * k];
    cout << ans;




    return 0;
}



