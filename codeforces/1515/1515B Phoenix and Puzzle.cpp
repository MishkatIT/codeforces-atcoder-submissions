/*
    author    : MishkatIT
    created   : Thursday 2023-02-09-13.37.44
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
bool isSquare(int a, int b)
{
    if(a % b == 0)
    {
        a /= b;
        int temp = sqrt(a);
        return temp * temp == a;
    }
    return 0;

}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ((isSquare(n, 2) || isSquare(n, 4)) ? "YES" : "NO") << '\n';
    }
    return 0;
}
