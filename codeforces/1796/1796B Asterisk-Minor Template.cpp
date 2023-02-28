/*
    author    : MishkatIT
    created   : Tuesday 2023-02-28-21.02.48
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
void LesGo (void)
{
    string a, b;
    cin >> a >> b;
    if(a.front() == b.front())
    {
        cout << "YES" << '\n';
        cout << b.front() << '*' << '\n';
        return;
    }
    if(a.back() == b.back())
    {
        cout << "YES" << '\n';
        cout << '*' << b.back() << '\n';
        return;
    }
    for (int i = 0; i < b.size() - 1; i++)
    {
        string temp = "xx";
        temp[0] = b[i];
        temp[1] = b[i + 1];
        if(a.find(temp) != string::npos)
        {
            cout << "YES" << '\n';
            cout << '*' << temp << '*' << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        LesGo();
    return 0;
}
