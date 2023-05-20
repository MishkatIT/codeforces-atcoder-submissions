/*
    author    : MishkatIT
    created   : Saturday 2023-05-20-21.19.05
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    vector<string> a{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> b{"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int n;
    cin >> n;
    if(n <= 19)
        cout << a[n];
    else
    {
        string x;
        x += b[(n / 10) - 2];
        if(n % 10 != 0)
            x += "-", x += a[n % 10];
        cout << x;
    }
    return 0;
}

