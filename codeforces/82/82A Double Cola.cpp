/*
    author    : MishkatIT
    created   : Monday 2022-11-14-03.37.03
    problem   : 82 A. Double Cola
*/
#include<iostream>
#include<vector>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<string> v{"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int x = 1;
    while(x * 5 < n)
    {
        n -= x * 5;
        x *= 2;
    }
    cout << v[(n - 1) / x] << '\n';
    return 0;
}



