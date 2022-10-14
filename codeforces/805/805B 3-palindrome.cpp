/*
    author    : MishkatIT
    created   : Saturday 2022-10-15-05.16.59
    problem   : 805 B. 3-palindrome
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    long n;
    cin >> n;
    for(int i=0, cnt=1; i<n; i++)
    {
        if(cnt==1 || cnt==2)
        {
            cout << 'a';
            cnt++;
        }
        else if(cnt==3)
        {
            cout << 'b';
            cnt++;
        }
        else
        {
            cout << 'b';
            cnt=1;
        }

    }


    return 0;
}



