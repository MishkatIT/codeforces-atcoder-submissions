/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int h, w;
    cin >> h >> w;
    int si, sj;
    cin >> si >> sj;
    char arr[h + 1][w + 1];
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> arr[i][j];
        }
    }
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == 'L') {
            if (sj - 1 > 0 && arr[si][sj - 1] == '.') sj--;
        }
        if (x[i] == 'R') {
            if (sj + 1 <= w && arr[si][sj + 1] == '.') sj++;
        }
        if (x[i] == 'U') {
            if (si - 1 > 0 && arr[si - 1][sj] == '.') si--;
        }
        if (x[i] == 'D') {
            if (si + 1 <= h && arr[si + 1][sj] == '.') si++;
        }
    }
    cout << si << ' ' << sj << '\n'; 
    return 0;
}