/*
    author    : MishkatIT
    created   : Friday 2022-10-28-00.05.11
    problem   : 1372 A. Omkar and Completion
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
        int n;
        cin >> n;
        for(int i = 0; i < n;)
        {
            i++;
            cout << i << ' ';
            i++;
            if(i<=n)
                cout << 1000-i+1 << ' ';
        }
        cout << '\n';

    }

    return 0;
}



