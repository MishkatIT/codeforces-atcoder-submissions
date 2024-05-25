#include <bits/stdc++.h>

bool ok(std::string s) {
  for (size_t i = 1; i < s.length(); ++i)
    if (s[i] == s[i - 1])
      return false;
  return true;
}


std::string s;
void solve() {
  int n; std::cin >> n;
  std::cin >> s;
  int cnt0 = 0, cnt1 = 0;
  for (int i = 0; i < s.length(); ++i) {
    cnt0 += s[i] == '0';
    cnt1 += s[i] == '1';
  }
  if (cnt0 != cnt1) {
    std::cout << -1 << std::endl;
    return;
  }
  std::vector<int> z;
  std::deque<char> q;
  for (int i = 0; i < s.length(); ++i)
    q.push_back(s[i]);
  
  int d = 0;
  while (!q.empty()) {
    if (q.front() == q.back()) {
      if (q.front() == '0') {
        q.push_back('0');
        q.push_back('1');
        z.push_back(n - d);
      } else {
        q.push_front('1');
        q.push_front('0');
        z.push_back(0 + d);
      }
      n += 2;
    }
    while (!q.empty() && q.front() != q.back()) {
      q.pop_back();
      q.pop_front();
      ++d;
    }
  }

  std::cout << z.size() << std::endl;
  for (int i = 0; i < z.size(); ++i) {
    std::cout << z[i];
    if (i + 1 == z.size()) std::cout << std::endl;
    else std::cout << " ";
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) solve();
  return 0;
}