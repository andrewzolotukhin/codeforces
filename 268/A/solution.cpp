#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;

  int n;
  vector<pair<int, int>> teams;

  cin >> n;

  while (n--) {
    int h, g;
    cin >> h >> g;
    teams.push_back(make_pair(h, g));
  }

  int answer = 0;

  for (int i = 0; i < teams.size(); i++) {
    for (int j = 0; j < teams.size(); j++) {
      if (i == j)
        continue;

      if (teams[i].first == teams[j].second) {
        answer++;
      }
    }
  }

  cout << answer << '\n';
}
