/*
    author    : MishkatIT
    created   : Monday 2023-01-16-17.00.50
    problem   : 5 B. Center Alignment
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    vector<string>v;
    int mx = -1;
    while(getline(cin, str))
    {
        v.push_back(str);
        mx = max(mx, (int)str.length());
    }
    string s;
    s.append(mx + 2, '*');
    cout << s << '\n';
    bool toogle = true;
    for (int i = 0; i < (int)v.size(); i++)
    {
        string a, b;
        cout << '*';
        int len = mx - v[i].length();
        if(len % 2 == 0)
        {
            a.append((len / 2), ' ');
            b = a;
        }
        else if(toogle)
        {
            a.append((len / 2), ' ');
            toogle ^= 1;
            b = a;
            b += " ";
        }
        else
        {
            a.append(ceil(len / 2.0), ' ');
            toogle ^= 1;
            b = a;
            b.pop_back();
        }
        cout << a << v[i] << b << "*\n";
    }
    cout << s;
    return 0;
}

//************
//* This  is *
//*          *
//*Codeforces*
//*   Beta   *
//*  Round   *
//*     5    *
//************
//
//****************
//*welcome to the*
//*  Codeforces  *
//*     Beta     *
//*   Round 5    *
//*              *
//*      and     *
//*  good luck   *
//****************
