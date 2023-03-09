/*
    author    : MishkatIT
    created   : Thursday 2023-03-09-16.26.09
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    string a, b;
    getline(cin, a);
    vector<int> arr(200);
    for(auto &i: a)
    {
        arr[i]++;
    }
    getline(cin, b);
    for(auto &i: b)
    {
        if(i != ' ')
        {
            if(arr[i])
                arr[i]--;
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}

