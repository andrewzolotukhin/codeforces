#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  vector<vector<int>> cnt(26, vector<int>(26, 0));
  int n;
  string s;
  cin >> n >> s;

  for (int i = 0; i < n - 1; i++) {
    cnt[(int)(s[i] - 'A')][(int)(s[i + 1] - 'A')]++;
  }

  int ansI = -1, ansJ = -1, v = -1;
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < 26; j++) {
      if (cnt[i][j] > v) {
        v = cnt[i][j];
        ansI = i;
        ansJ = j;
      }
    }
  }
  cout << (char)(ansI + 'A') << (char)(ansJ + 'A') << '\n';
}
