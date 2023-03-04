/*
    author    : MishkatIT
    created   : Saturday 2023-03-04-21.42.44
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

void print(vector<vector<int>>& v, int x)
{
    for(int i = 0; i < v.size(); i++)
    {
        for(int z = 0; z < abs(x); z++)
        {
            cout << "  ";
        }
        x--;
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " \n"[j == v[i].size() - 1];
        }
    }
}

int main()
{
    fio;
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n + 1; i++)
    {
        vector<int> temp;
        for (int j = 0; j < (i * 2 + 1); j++)
        {
            temp.push_back(j - 2 * max(0, j - i));
        }
        v.push_back(temp);
    }
    print(v, n);
    int sz = v.size();
    for (int i = 0; i < sz / 2; i++)
    {
        swap(v[i], v[sz - i - 1]);
    }
    v.erase(v.begin());
    print(v, -1);

    return 0;
}


