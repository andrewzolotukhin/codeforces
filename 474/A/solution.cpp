#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  vector<string> keys = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};

  string dir;
  string s;
  cin >> dir >> s;

  map<char, char> mp;

  for (int i = 0; i < keys.size(); i++) {
    for (int j = dir == "R" ? 1 : 0;
         j < ((dir == "R") ? keys[i].size() : keys[i].size() - 1); j++) {
      mp[keys[i][j]] = keys[i][dir == "R" ? j - 1 : j + 1];
    }
  }

  for (char c : s) {
    cout << mp[c];
  }

  cout << '\n';
}
