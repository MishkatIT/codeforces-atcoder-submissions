/*
    author    : MishkatIT
    created   : Thursday 2023-03-16-22.16.04
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int n;
vector<string> v(300);
bool print(string str)
{
    map<string, int> prefixes;
    while((int)str.length())
    {
        str.pop_back();
        prefixes[str]++;
    }
    vector<char> temp;
    int p = 0;
    for(int i = 0; i < (2 * n) - 2; i++)
    {
        if(prefixes[v[i]])
        {
            temp.push_back('P');
            prefixes[v[i]]--;
            p++;
        }
        else
        {
            temp.push_back('S');

        }
    }
    if(p == (int)temp.size() / 2)
    {
        for(auto &i : temp)
            cout << i;
        return true;
    }
    else return false;
}

int main()
{
    fio;
    cin >> n;
    string a, b, str;
    for(int i = 0; i < (2 * n) - 2; i++)
    {
        cin >> v[i];
        if(v[i].length() == n - 1)
        {
            if(a.size() == 0)
                a = v[i];
            else
                b = v[i];
        }
    }
    str = a + b.back();
    if(str.substr(1, n - 1) != b)
        str = b.front() + a;
    if(!print(str))
    {
        str = b.front() + a;
        print(str);
    }
    return 0;
}
//SPSSPPPS

