#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string statmnt;
    int n, x = 0;
    cin >> n;
    while(n--)
    {
        cin >> statmnt;
        if (statmnt[1] == '+')
            x++;
        else
            x--;
    }
    cout << x;
}
