/*
    author    : MishkatIT
    created   : Friday 2022-10-14-23.51.49
    problem   : 832 A. Sasha and Sticks.cp
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    long long n, k;
	cin >> n >> k;
	cout << ((n/k)%2 == 1 ? "YES" : "NO") << '\n';

    return 0;
}



