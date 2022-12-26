/*
    author    : MishkatIT
    created   : Tuesday 2022-12-27-00.26.11
    problem   : A. IQ Test
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    char arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool ok = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            char check[1000];
            check['#'] = 0;
            check['.'] = 0;
            check[arr[i][j]]++;
            check[arr[i][j + 1]]++;
            check[arr[i + 1][j]]++;
            check[arr[i + 1][j + 1]]++;
            if(check['#'] >= 3 || check['.'] >= 3)
            {
                ok = true;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';

    return 0;
}

