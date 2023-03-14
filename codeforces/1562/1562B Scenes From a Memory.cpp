/*
    author    : MishkatIT
    created   : Tuesday 2023-03-14-23.15.11
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int prime[110];
set<int> st{1, 4, 6, 8, 9};
void p (void)
{
    for (int i = 2; i <= 100; i++)
    {
        if(prime[i] == 0)
        {
            for (int j = i * i; j <= 100; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

void go(void)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if(st.find(str[i] - '0') != st.end())
        {
            cout << 1  << '\n' << str[i] << '\n';
            return;
        }

    }
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string temp;
            temp += str[i];
            temp += str[j];
            if(prime[stoi(temp)] == 1)
            {
                cout << 2 << '\n' << temp << '\n';
                return;
            }
        }
    }
}

int main()
{
    fio;
    p();
    int t;
    cin >> t;
    while(t--)
    {
        go();
    }
    return 0;
}

