/*
    author    : MishkatIT
    created   : Wednesday 2022-10-26-03.23.40
    problem   : 977 B. Two-gram
*/
#include<iostream>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str, ans="";
    int temp = 0, n, cnt = 0;
    cin >> n >>str;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
            if(str[i] == str[j] and str[i+1] == str[j+1])
                cnt++;
        if(cnt>temp)
        {
            temp = cnt;
            ans = str[i+1];
            ans = str[i]+ans;
        }
        cnt = 0;

    }
    cout << ans;

    return 0;
}




