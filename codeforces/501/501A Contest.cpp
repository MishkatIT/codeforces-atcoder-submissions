/*
    author    : MishkatIT
    created   : Friday 2022-12-16-04.53.34
    problem   : A. Contest
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int p, pp, t, tt;
    cin >> p >> pp >> t >> tt;
    int x = max(((3 * p) / 10), (p - ((p * t) / 250)));
    int y = max(((3 * pp) / 10), (pp - ((pp * tt) / 250)));
    cout << (x == y ? "Tie" : (x > y ? "Misha" : "Vasya"));
    return 0;
}

