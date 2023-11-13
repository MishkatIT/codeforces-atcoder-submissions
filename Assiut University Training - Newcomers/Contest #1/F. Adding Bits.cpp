/*
    author    : MishkatIT
    created   : Friday 2023-01-20-18.14.07
    problem   : F. Adding Bits
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b;
    cin >> a >> b;
    string binString;
    for (int i = 0; i < 32; i++)
    {
        char c;
        if(a & 1 & b & 1 || !(a & 1) & !(b & 1))
            c = '0';
        else
            c = '1';
        binString.insert(binString.begin(), c);
        a >>= 1;
        b >>= 1;
    }
    cout << stoi(binString, 0, 2);
    return 0;
}


// another version

/*
    author    : MishkatIT
    created   : Friday 2023-01-20-18.14.07
    problem   : F. Adding Bits
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b;
    cin >> a >> b;
    a ^= b;
    cout << a;
    return 0;
}