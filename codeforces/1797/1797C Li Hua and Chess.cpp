/*
    author    : MishkatIT
    created   : Sunday 2023-04-09-02.16.02
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

void print(int a, int b)
{
    cout << "! " << a << " " << b << endl;
    return;
}

int ask(int a, int b)
{
    cout << "? " << a << " " << b << endl;
    int x;
    cin >> x;
    return x;
}

void LesGo (void)
{
    int n, m;
    cin >> n >> m;
    int distance = ask(1, 1);
    if(distance == 0)
    {
        print(1, 1);
        return;
    }
    int x = min(n, distance + 1);
    int y = min(m, distance + 1);
    distance = ask(x, y);
    if(distance == 0)
    {
        print(x, y);
        return;
    }
    if(x - distance <= 0)
    {
        print(x, y - distance);
        return;
    }
    else if(y - distance <= 0)
    {
        print(x - distance, y);
        return;
    }
    else
    {
        int a = x - distance;
        int b = y - distance;;
        distance = ask(a, y);
        if(distance == 0)
        {
            print(a, y);
            return;
        }
        else
        {
            print(x, b);
            return;
        }
    }
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
