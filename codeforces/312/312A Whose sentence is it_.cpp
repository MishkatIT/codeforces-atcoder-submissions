/*
    author    : MishkatIT
    created   : Wednesday 2023-09-20-22.56.11
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character after reading t
    while(t--) {
        string str;
        getline(cin, str);
        int cnt1 = 0, cnt2 = 0;
        int n = str.size();
        string a = "lala.";
        string b = "miao.";

        for (int i = 0; i < min(5, n); i++) {
            cnt1 += (str[i] == b[i]);
        }
        for (int i = n - 1, j = 4; i > max(n - 6, -1); i--, j--) {
            cnt2 += (str[i] == a[j]);
        }
        if(cnt1 == 5 && cnt2 != 5) {
            cout << "Rainbow's" << '\n';
        } else if(cnt1 != 5 && cnt2 == 5) {
            cout << "Freda's" << '\n';
        } else {
            cout << "OMG>.< I don't know!" << '\n';
        }
    }

    return 0;
}

