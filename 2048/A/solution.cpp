#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> dp;

vector<int> toDigits(int n) {
  vector<int> res;
  if (n == 0)
    return {0};

  while (n) {
    res.push_back(n % 10);
    n /= 10;
  }
  return res;
}

int fromDigits(vector<int> digits) {
  int res = 0;
  for (int i = 0; i < digits.size(); i++) {
    res += digits[i];
    res *= 10;
  }
  res /= 10;
  return res;
}

vector<int> remove33(vector<int> inp) {
  vector<int> res;
  vector<int> ts;

  for (int i = 0; i < inp.size(); i++) {
    if (inp[i] == 3) {
      ts.push_back(i);
    }
  }

  for (int i = 1; i < ts.size(); i++) {
    vector<int> nn;
    if (ts[i] - 1 != ts[i - 1])
      continue;
    for (int j = 0; j < inp.size(); j++) {
      if (j != ts[i] && j != ts[i - 1]) {
        nn.push_back(inp[j]);
      }
    }
    res.push_back(fromDigits(nn));
  }
  return res;
}

bool solve(int n) {
  if (dp.find(n) != dp.end()) {
    return dp[n];
  }
  if (n > 0 && n % 33 == 0) {
    dp[n] = true;
    return true;
  }

  auto candidates = remove33(toDigits(n));

  for (auto c : candidates) {
    if (solve(c)) {
      dp[n] = true;
      return true;
    }
  }

  int k = 0;
  for (int i = n % 33; i < n % 33 && k < 33; i += 33) {
    k++;
    auto res = solve(i);
    if (res) {
      dp[n] = true;
      return true;
    }
  }

  // if (n > 33 && solve(n - 33)) {
  //   dp[n] = true;
  //   return true;
  // }

  dp[n] = false;
  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    auto res = solve(n);
    cout << (res ? "YES" : "NO") << '\n';
  }
}
