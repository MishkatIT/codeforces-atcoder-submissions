/*
    author    : MishkatIT
    created   : Sunday 2022-12-25-18.29.11
    problem   : B. Perfect Number
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void perfect(int n)
{
    int num = 19;
    for (int i = 0; i < n;)
    {
        int sum = 0;
        int temp = num;
        while(temp)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        if(sum == 10)
            i++, num++;
        else
            num++;

    }
    cout << --num;
}

int main()
{
    fio;
    int n;
    cin >> n;
    perfect(n);
    return 0;
}
